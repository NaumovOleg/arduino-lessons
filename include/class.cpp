
#include <iostream>

using namespace std;

#ifndef Classes_h
#define Classes_h
class Tractor;

class Tractor;
class Auto;

class Tractor {
private:
  int speed = 1000;
  friend Auto;

public:
  friend int getPrice(Auto, Tractor);
};

class Auto {

private:
  int price = 30;

public:
  Auto() { wheels = price; };
  explicit Auto(int wh) { wheels = wh; };
  explicit Auto(int wheels, int speed) {
    this->wheels = wheels;
    this->speed = speed;
  };

  int wheels;
  void setWheels(int numb) { wheels = numb; }
  // ~Auto() { cout << 'D' << endl; }
  friend int getPrice(Auto, Tractor);
  friend int getBmwPrice(Auto);

  int getTractorSp() {
    Tractor tractor;
    return tractor.speed;
  };

protected:
  int speed = 200;
  bool driver = true;
  explicit Auto(bool driver) {
    this->wheels = 4;
    this->driver = driver;
  };
};

class BMW : public Auto {
public:
  BMW(int wheels, bool drive) : Auto(drive) { this->wheels = wheels; };

  bool drive = true;
  // char drive[] = {'R', "L", "B", "F"};
};

int getPrice(Auto autos, Tractor tractor) {
  return autos.price + tractor.speed;
};
int getBmwPrice(Auto autos) { return autos.price; };

int main() {
  Auto mers(20);
  Tractor tr;

  BMW bmw(3, false);

  int u = getPrice(bmw, tr);

  cout << u << (bool)bmw.drive << endl;

  return 0;
}

#endif