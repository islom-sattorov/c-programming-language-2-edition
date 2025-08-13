
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int myAtoi(char *s);

int main() {
  char x[] = "21474836460";
  printf("\n%d", myAtoi(x));
  return 0;
}

int myAtoi(char *s) {
  int i = 0;
  int sign = 1;
  long long num = 0;

  while (s[i] == ' ' || s[i] == '\t') {
    i++;
  }

  if (s[i] == '-') {
    sign = -1;
    i++;
  } else if (s[i] == '+') {
    i++;
  }

  for (; isdigit(s[i]); i++) {
    num = 10 * num + (s[i] - '0');
    if (num > INT_MAX) {
      printf("INT max: %d", INT_MAX);
      int a = (INT_MAX * sign);
      if (sign == -1) {
        return a - 1;
      } else if (sign == 1) {
        return a;
      }
    } else if (num < INT_MIN) {
      printf("INT min: %d", INT_MIN);
      return INT_MIN * sign;
    }
  }

  if (num == 0) {
    return num;
  }

  int iNum = num;
  printf("\n %d", iNum);
  return iNum * sign;
}
