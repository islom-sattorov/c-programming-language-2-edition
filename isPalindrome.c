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
  int64_t reversed = 0;

  while(x != 0) {
    int digit = x % 10;
    reversed = reversed * 10 + digit;
    x = x / 10;
  }

  return original == reversed;
}
