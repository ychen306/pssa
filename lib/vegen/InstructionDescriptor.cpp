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

std::vector<InstructionDescriptor> getTestInsts() {
  auto *MulAdd = buildMulAdd();
  InputElement a1{0, 0};
  InputElement a2{0, 1};
  InputElement a3{0, 2};
  InputElement a4{0, 4};
  InputElement a5{0, 5};
  InputElement a6{0, 6};
  InputElement a7{0, 7};
  InputElement a8{0, 8};
  InputElement b1{1, 0};
  InputElement b2{1, 1};
  InputElement b3{1, 2};
  InputElement b4{1, 4};
  InputElement b5{1, 5};
  InputElement b6{1, 6};
  InputElement b7{1, 7};
  InputElement b8{1, 8};
  return {InstructionDescriptor("pmaddwd128",
                                {VectorSize{128, 16}, VectorSize{128, 16}},
                                {
                                    {MulAdd, {a1, b1, a2, b2}},
                                    {MulAdd, {a3, b3, a4, b4}},
                                    {MulAdd, {a5, b5, a6, b6}},
                                    {MulAdd, {a7, b7, a8, b8}},
                                })};
};
