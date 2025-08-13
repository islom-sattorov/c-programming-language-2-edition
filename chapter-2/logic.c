#include <stdio.h>

int main() {
  int c;
  for (int i = 0; i < 1000 - 1; ++i) {
    c = getchar();

    if (c == EOF) {
      break;
    }

    if (c == '\n') {
      break;
    }
  }

  return 0;
}
