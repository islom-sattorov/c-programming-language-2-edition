#include <stdbool.h>
#include <stdio.h>

#define MAXCHARACTER 1000
#define TABSPACE 7

int getLine(char line[], int maxline);
int entab(char line[], int idx, int blankCount);

int main() {
  int len;
  char line[MAXCHARACTER];

  while ((len = getLine(line, MAXCHARACTER)) > 0) {
    printf("%s\n", line);
  }

  return 0;
}

int entab(char line[], int idx, int blankCount) {
  int startIdx = idx - blankCount;

  while (blankCount >= TABSPACE) {
    line[startIdx++] = '\t';
    blankCount -= TABSPACE;
  }

  while (blankCount > 0) {
    line[startIdx++] = ' ';
    blankCount--;
  }

  return startIdx;
}

int getLine(char s[], int lim) {
  int c;
  int i = 0;

  int blankCount = 0;

  for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if (c == ' ') {
      blankCount++;
    } else {
      if (blankCount > 0) {
        i = entab(s, i, blankCount);
        blankCount = 0;
      }
      s[i] = c;
    }
  }

  if (c == '\n') {
    s[i++] = c;
  }

  // \0 = null character, маркер того что строка закончилась
  s[i] = '\0';

  return i; // Длина нашей строки
}
