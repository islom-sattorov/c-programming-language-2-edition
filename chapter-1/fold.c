#include <stdio.h>

// Write a program to ``fold" long input lines into two or more
// shorter lines after the last non-blank character that occurs
// before the n-th column of input. Make sure your program does
// something intelligent with very long lines, and if there are
// no blanks or tabs before the specified column.

// Если строка:
// Hello world this is a long line

// n = 10, последний пробел перед 10-м символом — после "Hello" (позиция 5)

// Перенос:
// Hello
// world this is a long line

#define MAXCHARACTER 1000
#define BREAKCHARACTER 10

int main() {
  int c;
  int i = 0;
  char line[MAXCHARACTER];
  int countC = 0;
  int lastBlankIndex = -1;
  int countAll = 0;

  while (i < MAXCHARACTER - 1 && (c = getchar()) != EOF) {
    if (c == ' ') {
      lastBlankIndex = i;
    }

    if (countC >= BREAKCHARACTER) {
      if (c == ' ') {
        line[i] = '\n';
      } else if (c != ' ') {
        if (lastBlankIndex > 0) {
          line[lastBlankIndex] = '\n';
          lastBlankIndex = -1;
        } else {
          line[i++] = '\n';
        }
      }
      countC = 0;
    }

    line[i++] = c;
    countC++;
    countAll++;
  }

  printf("Line: %s \n", line);
  printf("Count all: %d\n", countAll);
  printf("Count each n: %d\n", countAll / BREAKCHARACTER);

  return 0;
}

// Test 1
// Hello world this is a very long line are you sure about this?

// Test 2
// Hello world this is a very long line are you sure about this? Hello world
// this is a very long line are you sure about this? Hello world this is a very
// long line are you sure about this? Hello world this is a very long line are
// you sure about this? Hello world this is a very long line are you sure about
// this? Hello world this is a very long line are you sure about this? Hello
// world this is a very long line are you sure about this? Hello world this is a
// very long line are you sure about this? Hello world this is a very long line
// are you sure about this?

// Test 3
// jaskdjlkasdjflk;adjslkfjadslkfkasjdjkfhajksdhfkljasdhfjkhasdjkfhasdkjfhakjsdhfkjashdkfjahskjfhajksdhfjkasdhfkjadshjkfhdsakjlfhasdkjlhflkjdsahjkfadhskjfhasdjkfhkdjashlkjahfkdjlfhdkjsalhfkjasdhfkjashdkjfhajskdhfjkashdfkjasdhjkfahskldjfhasdjklfhsjdfhadsjkfhadjkslhfkjdsahfkjldashfkjadshkfjasd
