#ifndef Structs_h
#define Structs_h

struct Auto {
  int speed;
  char make;
};
int main() {

  Auto bmw;
  bmw.speed = 100;
  bmw.make = 'B';

  Auto audi = {200, 'A'};

  return 0;
}
#endif