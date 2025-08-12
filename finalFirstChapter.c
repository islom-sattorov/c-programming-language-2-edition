#include <stdio.h>

#define MAXCHARACTER 1000
#define TABSPACE 7

int getLine(char line[], int maxline);
int detab(char line[], int idx);

int main() {
  int len;
  char line[MAXCHARACTER];

  while((len = getLine(line, MAXCHARACTER)) > 0) {
     printf("Detabed line: %s \n", line);
  }

  return 0;
}

int detab(char line[], int idx) {
  int spaces = TABSPACE - (idx % TABSPACE);

  while(spaces-- > 0) {
    line[idx++] = ' ';
  }

  return idx;
}

int getLine(char s[], int lim) {
  int c;
  int i = 0;

  for(; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if(c == '\t') {
     i = detab(s, i) - 1;
    }else {
      s[i] = c;
    }
  }

  if(c == '\n'){
    s[i++] = c;
  }

  // \0 = null character, маркер того что строка закончилась
  s[i] = '\0';

  return i; // Длина нашей строки
}
