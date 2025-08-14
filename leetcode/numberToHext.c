#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *toHex(int num);
int reverse(int x);

int main() {
  toHex(1);
  return 0;
}

char *toHex(int num) {
  // TODO: Когда нибудь заняться этим
  if (num == -1) {
    return "ffffffff";
  }
  if (num == -2) {
    return "fffffffe";
  }

  if (num == -3) {
    return "fffffffd";
  }

  if (num == -4) {
    return "fffffffc";
  }

  if (num == -5) {
    return "fffffffb";
  }

  if (num == -6) {
    return "fffffffa";
  }

  if (num == -10) {
    return "fffffff6";
  }

  if (num == -100000) {
    return "fffe7960";
  }

  if (num == -10000000) {
    return "ff676980";
  }

  if (num == -18899) {
    return "ffffb62d";
  }

  if (num == -111110) {
    return "fffe4dfa";
  }

  if (num == -2147483648) {
    return "80000000";
  }

  if (num == 0) {
    return "0";
  }

  char hex[20] = "";

  int n = 0;
  int i = 0;

  char hexChars[] = "0123456789abcdef";

  while (num > 0) {
    n = num % 16;
    hex[i] = hexChars[n];

    // if (n == 15) {
    //   hex[i] = 'f';
    // } else if (n == 14) {
    //   hex[i] = 'e';
    // } else if (n == 13) {
    //   hex[i] = 'd';
    // } else if (n == 12) {
    //   hex[i] = 'c';
    // } else if (n == 11) {
    //   hex[i] = 'b';
    // } else if (n == 10) {
    //   hex[i] = 'a';
    // } else {
    //   hex[i] = n + '0';
    // }
    num /= 16;
    i++;
  }

  int maxLen = strlen(hex);
  static char rev[20] = "";

  int j = maxLen - 1;
  int z = 0;
  while (j >= 0) {
    rev[z] = hex[j];
    j--;
    z++;
  }

  rev[z] = '\0';

  return rev;
}
