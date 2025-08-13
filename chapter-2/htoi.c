
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int htoi(const char s[]);
int non_opt_htoi(char n[], int len);

enum { A = 10, B, C, D, E, F };

int main() {
  char test1[] = "0x1A";
  printf("\n Test 1: %d", htoi(test1));
  char test2[] = "0xFF";
  printf("\n Test 2: %d", htoi(test2));
  char test3[] = "0x0B";
  printf("\n Test 3: %d", htoi(test3));
  char test4[] = "0x7F";
  printf("\n Test 4: %d", htoi(test4));
  char test5[] = "0x123";
  printf("\n Test 5: %d", htoi(test5));
  char test6[] = "0xABC";
  printf("\n Test 6: %d", htoi(test6));
  char test7[] = "0x0";
  printf("\n Test 7: %d", htoi(test7));
  char test8[] = "0xDEAD";
  printf("\n Test 8: %d", htoi(test8));
  char test9[] = "0xBEEF";
  printf("\n Test 9: %d", htoi(test9));
  char test10[] = "0xCAFEBABE";
  printf("\n Test 10: %d", htoi(test10));

  return 0;
}

int htoi(const char s[]) {
  int i = 0;
  int result = 0;

  // Пропускаем префикс 0x или 0X
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    i = 2;
  }

  for (; s[i] != '\0'; i++) {
    char c = s[i];
    int val;

    if (isdigit(c)) {
      val = c - '0';
    } else if (c >= 'a' && c <= 'f') {
      val = c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
      val = c - 'A' + 10;
    } else {
      break; // если символ не hex
    }

    result = 16 * result + val;
  }

  return result;
}

int non_opt_htoi(char n[], int len) {
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
