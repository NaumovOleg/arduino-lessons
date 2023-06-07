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
    val = 0;
  }

  // чтобы  изменить  элемент массива  нужно  создать  ссылку
  for (int &val : vals) {
    val = 0;
  }

  for (int i = 0; i < 100; i++) {
    // покинуть цикл при достижении 50
    if (i == 50)
      break;
  }

  for (int i = 0; i < 100; i++) {
    // если i равно 10, пропускаем
    if (i == 10)
      continue;

    // заполним все ячейки значением 25
    vals[i] = 25;
  }

  return last;
};

#endif