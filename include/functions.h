#ifndef Functions_h
#define Functions_h

int sumFunction(int paramA, int paramB) { return (paramA + paramB); }
float sumFunction(float paramA, float paramB) { return (paramA + paramB); }

// Передается сыылка вместо  значения (изменит  аргументы )
void incr(int &var) { var += 10; }

struct MyStruct {
  int valSum;
  int valSub;
  int valMul;
};

MyStruct construct(int val) {
  MyStruct myStruct;
  myStruct.valSum = val;
  myStruct.valSub = val;
  myStruct.valMul = val;
  return myStruct;
}

MyStruct computeStruct(int val1, int val2) {
  return (MyStruct){val1 + val2, val1 - val2, val1 * val2};
}

void loopArr(int (&array)[10]) {

  for (int &el : array) {
    el++;
  }
}

int sumFunction(int *intArray) {
  int length = sizeof(intArray) / sizeof(intArray[0]);
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += intArray[i];
  }
  return sum;
}

template <typename T, typename R> T squareVal(T val, R val2) {
  return val * val2;
};

int mySquare = squareVal((int)3, 3.555);

#endif