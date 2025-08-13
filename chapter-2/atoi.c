
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int customAtoi(char s[]);

int main() {
  int x = atoi("123");
  int y = customAtoi("321");
  printf("Atoi: %d \t Custom Atoi: %d", x, y);

  return 0;
}

int customAtoi(char s[]) {
  int n = 0;

  for (int i = 0; isdigit(s[i]); ++i) {
    // s[i] - '0' = возвращает числовое значение этой строки
    n = 10 * n + (s[i] - '0');
  }

  return n;
}
