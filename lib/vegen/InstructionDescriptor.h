#ifndef VEGEN_INSTRUCTIONDESCRIPTOR_H
#define VEGEN_INSTRUCTIONDESCRIPTOR_H

#include "llvm/ADT/SmallVector.h"
#include "llvm/Analysis/IVDescriptors.h"

class Operation {
public:
  enum OperationKind {
    OK_Input,     // placeholder
    OK_Reduction, // e.g., add,mul,min,...
    OK_Select,
    OK_Binary, // Non-reduction, binary operator e.g., sub,div,c...
    OK_Convert, // trunc, sext, zext
    OK_Compare,
    OK_Constant
  };

private:
  const OperationKind Kind;
  // BitWidth of the output
  unsigned BitWidth;
  llvm::SmallVector<const Operation *, 2> Operands;

protected:
  Operation(OperationKind Kind, unsigned BitWidth,
            llvm::ArrayRef<const Operation *> Operands)
      : Kind(Kind), BitWidth(BitWidth),
        Operands(Operands.begin(), Operands.end()) {}

public:
  OperationKind getKind() const { return Kind; }
  unsigned size() const { return BitWidth; }
  llvm::ArrayRef<const Operation *> getOperands() const { return Operands; }
};

class InputOperation : public Operation {
  unsigned InputId;

public:
  // Different inputs are uniquely identified by ids within a larger operation
  InputOperation(unsigned InputId, unsigned BitWidth)
      : Operation(OK_Input, BitWidth, {}), InputId(InputId) {}
  static bool classof(const Operation *Op) { return Op->getKind() == OK_Input; }
  unsigned id() const { return InputId; }
};

class ReductionOperation : public Operation {
  llvm::RecurKind RdxKind;

public:
  ReductionOperation(llvm::RecurKind RdxKind,
                     llvm::ArrayRef<const Operation *> Operands)
      : Operation(OK_Reduction, Operands.front()->size(), Operands),
        RdxKind(RdxKind) {
    assert(
        llvm::all_of(Operands, [&](auto *O) { return O->size() == size(); }));
  }
  llvm::RecurKind getReductionKind() const { return RdxKind; }
  static bool classof(const Operation *Op) {
    return Op->getKind() == OK_Reduction;
  }
};

struct SelectOperation : public Operation {
  SelectOperation(const Operation *Cond, const Operation *IfTrue,
                  const Operation *IfFalse)
      : Operation(OK_Select, IfTrue->size(), {Cond, IfTrue, IfFalse}) {
    assert(Cond->size() == 1);
    assert(IfTrue->size() == IfFalse->size());
  }
  static bool classof(const Operation *Op) {
    return Op->getKind() == OK_Select;
  }
};

class BinaryOperation : public Operation {
  const llvm::Instruction::BinaryOps Opcode;

public:
  BinaryOperation(llvm::Instruction::BinaryOps Opcode, const Operation *A,
                  const Operation *B)
      : Operation(OK_Binary, A->size(), {A, B}), Opcode(Opcode) {
    assert(A->size() == B->size());
  }
  llvm::Instruction::BinaryOps getOpcode() const { return Opcode; }
  static bool classof(const Operation *Op) {
    return Op->getKind() == OK_Binary;
  }
};

class CompareOperation : public Operation {
  llvm::CmpInst::Predicate Predicate;

public:
  CompareOperation(llvm::CmpInst::Predicate Predicate, const Operation *A,
                   const Operation *B)
      : Operation(OK_Compare, 1, {A, B}), Predicate(Predicate) {
    assert(A->size() == B->size());
  }
  llvm::CmpInst::Predicate getPredicate() const { return Predicate; }
  static bool classof(const Operation *Op) {
    return Op->getKind() == OK_Compare;
  }
};

class ConstantOperation : public Operation {
  llvm::APInt C;

public:
  // `Str` is base-10 representation of the constant
  ConstantOperation(llvm::StringRef Str, unsigned BitWidth)
      : Operation(OK_Constant, BitWidth, {}), C(BitWidth, Str, 10) {}
  static bool classof(const Operation *Op) {
    return Op->getKind() == OK_Constant;
  }
  const llvm::APInt &getConst() const { return C; }
};

class ConvertOperation : public Operation {
  llvm::Instruction::CastOps Opcode;
public:
  ConvertOperation(llvm::Instruction::CastOps Opcode, unsigned OutputSize, const Operation *Input)
    : Operation(OK_Convert, OutputSize, {Input}), Opcode(Opcode) {}
  llvm::Instruction::CastOps getOpcode() const { return Opcode; }
  static bool classof(const Operation *Op) {
    return Op->getKind() == OK_Convert;
  }
};

// Identifies a single vector element for a given vector instruction
struct ElementBinding {
  unsigned OperandId; // Which operand
  unsigned ElementId; // Which element
};

struct BoundOperation {
  Operation *Op;
  // the i'th ElementBinding tells us where the `i'th` binds to
  llvm::SmallVector<ElementBinding, 2> Bindings;
};

// Describing the dimension of a input vector
struct VectorSize {
  unsigned VectorWidth;  // in bits
  unsigned ElementWidth; // also in bits
  unsigned getNumElements() const {
    return VectorWidth / ElementWidth;
  }
};

class InstructionDescriptor {
  std::string Name;
  llvm::SmallVector<VectorSize, 2> InputSizes;
  llvm::SmallVector<BoundOperation, 8> Operations;

public:
  InstructionDescriptor(llvm::StringRef Name,
                        llvm::ArrayRef<VectorSize> InputSizes,
                        llvm::ArrayRef<BoundOperation> Operations)
      : Name(Name), InputSizes(InputSizes.begin(), InputSizes.end()),
        Operations(Operations.begin(), Operations.end()) {}
  llvm::ArrayRef<VectorSize> getInputSizes() const { return InputSizes; }
  llvm::ArrayRef<BoundOperation> getOperations() const { return Operations; }
  llvm::StringRef getName() const { return Name; }
};

#endif
