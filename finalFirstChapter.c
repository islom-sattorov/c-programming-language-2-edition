#include <stdio.h>

#define MAXCHARACTER 1000
#define TABSPACE 7

int getLine(char line[], int maxline);

int main() {
  int len;
  char line[MAXCHARACTER];

  while((len = getLine(line, MAXCHARACTER)) > 0) {
     printf("Original Word: %s \n", line);
  }

  return 0;
}


int getLine(char s[], int lim) {
  int c;
  int i = 0;

  for(; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if(c == '\n'){
    s[i] = c;
    ++i;
  }

  // \0 = null character, маркер того что строка закончилась
  s[i] = '\0';

  return i; // Длина нашей строки
}
