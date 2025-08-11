#include <stdio.h>

#define MAXLINE 10

int getLine(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char to[], char from[], int len);

int main (){
  int len; // current line leght
  int max; // maximum length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; // longest line saved here

  max = 0;

  while((len = getLine(line, MAXLINE)) > 0){
    if(len > max){
      max = len;
      copy(longest, line);
    }

    if(max > 0){ // there was a line
      printf("Length: %d \n", max);
      printf("Word: %s \n", longest);
    }
  }

  return 0;
}

// getLine: read a line into s, return length
int getLine(char s[], int lim) {
  int c;
  int i = 0;
  int maxLen = 0;

  while((c = getchar()) != EOF && c != '\n'){
    if(i < lim - 1) {
      s[i] = c;
      ++i;
    }
    ++maxLen;
  }

  if(c == '\n'){
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
  while((to[i] = from[i]) != '\0'){
    ++i;
  }
}
