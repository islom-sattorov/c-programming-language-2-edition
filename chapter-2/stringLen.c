#include <stdio.h>
#include <string.h>

int stringLen(char s[]);

enum boolean { NO, YES };
enum escapes {
  BELL = '\a',
  BACKSPACE = '\b',
  TAB = '\t',
  NEWLINE = '\n',
  RETURN = '\r'
};

// FEB = 2, MAR = 3, etc
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
  char name[6] = "Islom";
  char year[5] = "1999";

  int nameLen = strlen(name);
  int yearLen = stringLen(year);

  int x = 'x';
  char xStr[2] = "x";

  printf("Name: %d \t Year: %d", nameLen, yearLen);

  return 0;
}

int stringLen(char s[]) {
  int i = 0;

  while (s[i] != '\0') {
    ++i;
  }

  return i;
}
