
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int customAtoi(char s[]);

int main() {
  int x = atoi("123");
  int y = customAtoi("321");
  int z = customAtoi("-321");

  printf("Atoi: %d \t Custom Atoi: %d \t  Atoi signed: %d", x, y, z);

  return 0;
}

int customAtoi(char s[]) {
  int n = 0;
  int sign = 1;
  int i = 0;

  // Пропускаем пробелы в начале
  while (s[i] == ' ' || s[i] == '\t')
    i++;

  // Проверка знака
  if (s[i] == '-') {
    sign = -1;
    i++;
  } else if (s[i] == '+') {
    i++;
  }

  // Основной цикл
  for (; isdigit(s[i]); i++) {
    n = 10 * n + (s[i] - '0');
  }

  return sign * n;
}
