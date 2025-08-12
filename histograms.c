#include <stdbool.h>
#include <stdio.h>

void print_array(int array[], int *size) {
  printf("\n Print array: \n");
  for (int i = 0; i < *size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}

void print_array_char(char array[], int *size) {
  printf("Print array: \n");
  for (int i = 0; i < *size; i++) {
    printf("%c ", array[i]);
  }

  printf("\n");
}

void horizontal_histogram(int array[], int *size) {
  printf("Horizontal histogram \n");
  for (int i = 0; i < *size; i++) {
    if (array[i] != 0) {
      printf("\n %d: ", array[i]);
    };
    for (int j = 0; j < array[i]; j++) {
      printf("-");
    }
  };
}

int find_max(int array[], int *size) {
  if (*size < 1) {
    return -1;
  }

  int greaterArrItem = array[0];
  for (int i = 1; i < *size; i++) {
    if (greaterArrItem < array[i]) {
      greaterArrItem = array[i];
    }
  }

  return greaterArrItem;
}

void vertical_histogram_old(int array[], int *size) {

  printf("\nVertical histogram \n");
  for (int i = 0; i < *size; i++) {

    for (int z = 0; z < *size; z++) {
      int greaterArrIdx = find_max(array, size);

      if (array[greaterArrIdx] == 0) {
        break;
      }

      if (z == greaterArrIdx) {
        printf(" | ");
        array[greaterArrIdx] = --array[greaterArrIdx];
      } else {
        printf("   ");
      }
    }

    printf("\n");
  }
}

void vertical_histogram(int array[], int *size) {
  int max = find_max(array, size);

  for (int level = max; level > 0; --level) {
    for (int i = 0; i < *size; i++) {
      if (array[i] >= level) {
        printf(" |-| ");
      } else {
        printf("     ");
      }
    }
    printf("\n");
  }

  for (int i = 0; i < *size; i++) {
    printf("  -  ");
  }

  printf("\n");

  for (int i = 0; i < *size; i++) {
    printf("  %d  ", array[i]);
  }
}

int find_element(int array[], int *size, int target) {
  for (int i = 0; i < *size; i++) {
    if (array[i] == target) {
      return i;
    }
  }

  return 0;
}

int main() {
  // Logic 2
  // int c;

  // int elems[30];
  // int ndigit[30];
  // int n = 30;

  // int i = 0;

  // while ((c = getchar()) != EOF) {
  //   int isFinded = find_element(elems, &n, putchar(c));

  //   if(isFinded == 0) {
  //     elems[i] = putchar(c);
  //     ndigit[i] = 1;
  //     i = i + 1;
  //   }else {
  //     ndigit[isFinded] = ++ndigit[isFinded];
  //   }
  // }
  // vertical_histogram(ndigit, &n);

  // Logic 2
  int ndigit[] = {2, 3, 9, 1, 2, 9, 8, 7, 6, 4};
  int n = sizeof(ndigit) / sizeof(ndigit[0]);
  print_array(ndigit, &n);
  // horizontal_histogram(ndigit, &n);
  vertical_histogram(ndigit, &n);

  return 0;
}
