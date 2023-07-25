
#include <iostream>
using namespace std;

template <typename T, typename T2> T2 func(T args[]) {
  cout << args[1] << endl;
  return args[0];
}

template <class ClassType> class A {
private:
  ClassType arr[10];

public:
  ClassType x;
  A(ClassType *arr) {
    for (int i = 0; i < 10; i++) {
      this->arr[i] = arr[i];
    }
  }
};

int main() {

  char i[] = {'Q', 'q'};

  char first = func<char, char>(i);

  A<char> a(i);

  cout << first << endl;

  return 0;
}