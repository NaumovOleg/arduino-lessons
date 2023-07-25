#ifndef Variables_h
#define Variables_h
int intA = 1;

bool boolA = false;
bool boolB = true;
bool boolC = 0;
bool boolD = 1;

float floatA = 1.33;
double doubleA = 1.44444;

char charA = 'a';

void loops() {
  int varL = 0;
  varL++;
  static int varS = 0;
  varS++;
  // здесь varL всегда будет равна 1
  // а varS - постоянно увеличиваться
  int index = 0;
  int ent = 3;
  int *ptr_ent = &ent;
  *ptr_ent = 3;
  int &ptr_ent2 = ent;
}
#endif
