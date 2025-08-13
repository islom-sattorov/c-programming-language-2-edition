
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int htoi(char n[], int len);

enum { A = 10, B, C, D, E, F };

// Test
// 0x1A     // 26
// 0xFF     // 255
// 0x0B     // 11
// 0x7F     // 127
// 0x123    // 291
// 0xABC    // 2748
// 0x0      // 0
// 0xDEAD   // 57005
// 0xBEEF   // 48879

// Для этого hex нужно поменять тип int на long
// 0xCAFEBABE // 3405691582

int main() {
  char test1[] = "0x1A";
  int len = strlen(test1);
  printf("\n %d", htoi(test1, len));

  return 0;
}

int htoi(char n[], int len) {
  int a = 0;
  int i = len - 1;
  int position = 0;

  while (i > 0 && n[i] != 'x') {
    printf("\n Debuger: \n value: %d \t positon: %d\t len: %d\t char: %c\t "
           "index: %d",
           a, position, len, n[i], i);
    if (toupper(n[i]) == 'F') {
      a += F * (pow(16, position));
    } else if (toupper(n[i]) == 'E') {
      a += E * (pow(16, position));
    } else if (toupper(n[i]) == 'D') {
      a += D * (pow(16, position));
    } else if (toupper(n[i]) == 'C') {
      a += C * (pow(16, position));
    } else if (toupper(n[i]) == 'B') {
      a += B * (pow(16, position));
    } else if (toupper(n[i]) == 'A') {
      a += A * (pow(16, position));
    } else {
      a += (n[i] - '0') * (pow(16, position));
    }
    --i;
    ++position;
  }

  return a;
}
