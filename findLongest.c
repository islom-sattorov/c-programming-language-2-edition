#include <stdio.h>

#define MAXLINE 1000
#define MINLINE 80

int getLine(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int len);

int main() {
  int len;                // current line leght
  int max;                // maximum length seen so far
  char line[MAXLINE];     // current input line
  char longest[MAXLINE];  // longest line saved here
  char reversed[MAXLINE]; // reversed line saved here

  max = 0;

  while ((len = getLine(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
      reverse(reversed, longest, max);
    }

    if (max > 0) { // there was a line
      printf("Length: %d \n", max);
      printf("Original Word: %s \n", longest);
      printf("Reversed word: %s \n", reversed);
    }

    if (max >= 80) {
      printf("Line is longer than 80 characters \n");
    }
  }

  return 0;
}

void reverse(char to[], char from[], int len) {
  int j = len;
  int i = 0;

  while ((to[i] = from[j]) != '\0') {
    --j;
    i++;
  }
}

// getLine: read a line into s, return length
int getLine(char s[], int lim) {
  int c;
  int i = 0;
  int maxLen = 0;

  while ((c = getchar()) != EOF && c != '\n') {
    if (i < lim - 1 && c != '\t' && c != ' ') {
      s[i] = c;
      ++i;
    }

    if (c != '\t' && c != ' ') {
      ++maxLen;
    }
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  // \0 = null character, маркер того что строка закончилась
  s[i] = '\0';

  return maxLen; // Длина нашей строки
}

// copy: copy from into to; assume to is big enough
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
