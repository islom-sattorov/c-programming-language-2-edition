
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXCHARACTER 1000

int lowerCustom(int c);

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(tolower(c));
    putchar(lowerCustom(c));
  }

  return 0;
}

int lowerCustom(int c) {
  if (c >= 'A' && c <= 'Z') {
    return c + 'a' - 'A';
  } else {
    return c;
  }
}
