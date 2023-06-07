
#ifndef My_Strings_h
#define My_Strings_h
#include <Arduino.h>
void test() {
  String s1(1234); // из целого числа, в десятичном виде
  String s2(1234, BIN); // с указанием разрядности (BIN, DEC, HEX)
  // String s3(3, 14, 1); // из float, с указанием кол-ва знаков после запятой
  String s4("text");    // из строковой константы
  String s5(F("text")); // из строковой константы с F
  String s6(s4);

  // String s11 = 12345;     // из целого числа
  // String s21 = 3.14;      // из float
  // String s31 = "text";    // из строковой константы
  // String s41 = F("text"); // из строковой константы с F
  // String s51 = 's';       // из символа
  // int val = 1234;
  // String s61 = val; // из переменной
  // String s71 = s6;
}

#endif