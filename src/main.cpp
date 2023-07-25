
#include "arrays.h"
#include "functions.h"
#include "strings.h"
#include "variables.h"
#include <Arduino.h>
#include <math.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(9600);

  // std::cout << "text";
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  MyStruct myStruct = construct(result);
  MyStruct myStruct2 = computeStruct(result, 3);

  Serial.println(myStruct.valMul + myStruct2.valSum);

  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), test, CHANGE);
  int o = ceil(1.333);
}

void loop() {
  test();

  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) { return x + y; }