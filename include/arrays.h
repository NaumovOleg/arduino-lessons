#ifndef Arrays_h
#define Arrays_h

int index = 0;
char arrChar[] = {'a', 'b', 'c', 'd'};
int arr2[] = {
    1,
    2,
    3,
    4,
};

char loopArr(char arr[]) {
  static char last = arr[index];

  int vals[] = {10, 11, 12, 13, 14};
  int length = sizeof(vals) / sizeof(vals[0]);

  for (int i = 0; i < length; i++) {
  }

  for (int &val : vals) {
    // чтобы  изменить  элемент массива  нужно  создать  ссылку
    val = 0;
  }

  for (int i = 0; i < 100; i++) {
    if (i == 50)
      break; // покинуть цикл при достижении 50
  }

  for (int i = 0; i < 100; i++) {
    // если i равно 10, пропускаем
    if (i == 10)
      continue;

    // заполним все ячейки значением 25
    vals[i] = 25;
  }

  return last;

  int *ptr_num = new int;
  char *ptr_array = new char[1];
  ptr_array[0] = (char)'a';
  ptr_array[1] = (char)'b';
  ptr_array[2] = 'c';

  for (int i = 0; i < sizeof(ptr_array) / sizeof(ptr_array[0]); i++) {
  }

  delete ptr_num;
  delete[] ptr_array;
};

#endif