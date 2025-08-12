#include <stdbool.h>
#include <stdio.h>

// read character
//  while(character is not end-of-file indicator)
//    output the character just read
//     read a character

// 1 = true
// 0 = false
// EOF = -1
// int main() {
//   int c;

//   while((c = getchar()) != EOF){
//     printf("\n CHAR: %d\n", c);
//     putchar(c);
//   }

//   return 0;
// }

// Character counting
// int main() {
//   double nc;

//   for(nc = 0; getchar() != EOF; ++nc);
//   printf("%.0f\n",nc);

//   return 0;
// }

// Character and symbols counting
// int main() {
//   int c, nl, tb, bl;
//   nl = tb = bl = 0;
//   bool isPrevBlank = false;

//   while((c = getchar()) != EOF) {
//     if(c == '\n'){
//       ++nl;
//     }

//     if(c == '\t'){
//       ++tb;
//       printf("'/t'");
//       continue;
//     } else if(c == '\b'){
//       printf("'/b'");
//       continue;
//     } else if(c == '\\'){
//       printf("'//'");
//       continue;
//     }

//     if(c == ' '){
//       ++bl;
//     }

//     if(isPrevBlank && c == ' ') {
//       continue;
//     } else {
//       putchar(c);
//     }

//     if(c == ' '){
//       isPrevBlank = true;
//     }else {
//       isPrevBlank = false;
//     }

//     printf("\t New lines count: %d\n", nl);
//     printf("\t Tabs count: %d\n", tb);
//     printf("\t Blanks count: %d\n", bl);
//   }

//   return 1;
// }

// character, word counting

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

// Count lines, words and characters in input
int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("%d %d %d\n", nl, nw, nc);
}
