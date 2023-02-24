#include "InstructionDescriptor.h"

using namespace llvm;

static Operation *sext(const Operation *X, unsigned N) {
  return new ConvertOperation(Instruction::SExt, N, X);
}

static Operation *mul(const Operation *A, const Operation *B) {
  return new ReductionOperation(RecurKind::Mul, {A, B});
}

static Operation *add(const Operation *A, const Operation *B) {
  return new ReductionOperation(RecurKind::Add, {A, B});
}

// (add (mul (sext a1) (sext b1)) (mul (sext a2) (sext b2)))
static Operation *buildMulAdd() {
  auto *a1 = sext(new InputOperation(0, 16), 32);
  auto *b1 = sext(new InputOperation(1, 16), 32);
  auto *a2 = sext(new InputOperation(2, 16), 32);
  auto *b2 = sext(new InputOperation(3, 16), 32);
  return add(mul(a1, b1), mul(a2, b2));
}

static std::vector<InstructionDescriptor> TestInsts;
ArrayRef<InstructionDescriptor> getTestInsts() {
  if (!TestInsts.empty())
    return TestInsts;
  auto *MulAdd = buildMulAdd();
  ElementBinding a1{0, 0};
  ElementBinding a2{0, 1};
  ElementBinding a3{0, 2};
  ElementBinding a4{0, 3};
  ElementBinding a5{0, 4};
  ElementBinding a6{0, 5};
  ElementBinding a7{0, 6};
  ElementBinding a8{0, 7};
  ElementBinding b1{1, 0};
  ElementBinding b2{1, 1};
  ElementBinding b3{1, 2};
  ElementBinding b4{1, 3};
  ElementBinding b5{1, 4};
  ElementBinding b6{1, 5};
  ElementBinding b7{1, 6};
  ElementBinding b8{1, 7};
  TestInsts.push_back(InstructionDescriptor(
      "pmaddwd128", {VectorSize{128, 16}, VectorSize{128, 16}},
      {
          {MulAdd, {a2, b2, a1, b1}},
          {MulAdd, {a4, b4, a3, b3}},
          {MulAdd, {a6, b6, a5, b5}},
          {MulAdd, {a8, b8, a7, b7}},
      }));
  return TestInsts;
}
