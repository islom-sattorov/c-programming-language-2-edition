#include <limits.h>
#include <stdio.h>

int reverse(int x);

int main() {
  int x = reverse(1534236469);
  printf("%d", x);
  return 0;
}

int reverse(int x) {
  if (x == 0) {
    return 0;
  }

  long long r = 0;

  while (x != 0) {
    int digit = x % 10;
    r = r * 10 + digit;
    if (r > INT_MAX || r < INT_MIN) {
      return 0;
    }
    x /= 10;
  }

  return (int)r;
}
