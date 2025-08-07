#include <stdbool.h>
#include <stdio.h>

int isPalindrome(int);

int main() {
  int x = 121;

  isPalindrome(x);
  return 0;
}

int isPalindrome(int x) {
  if(x < 0) return false;

  int original = x;
  printf("original: %d\n", original);
  int reversed = 0;

  while(x != 0) {
    int digit = x % 10;
    printf("digit: %d\n", digit);
    reversed = reversed * 10 + digit;
    printf("reversed: %d\n", reversed);
    x = x / 10;
    printf("x: %d\n", x);
  }

  return original == reversed;
}
