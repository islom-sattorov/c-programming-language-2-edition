#include <stdbool.h>
#include <stdio.h>

void print_array(int array[], int *size) {
    printf("Print array: \n");
    for(int i = 0; i < *size; i++) {
      printf("%d ", array[i]);
    }

    printf("\n");
}

void horizontal_histogram(int array[], int *size) {
    printf("Horizontal histogram \n");
    for(int i = 0; i < *size; i++) {
      if(array[i] != 0) {
        printf("\n %d: ", array[i]);
      };
      for(int j = 0; j < array[i]; j++) {
        printf("-");
      }
    };
}

int find_max(int array[], int *size) {
  int greaterArrIdx = 0;
  for(int i = 0; i < *size; i++) {
    if(array[greaterArrIdx] < array[i]) {
      greaterArrIdx = array[i];
    }
  }

  return greaterArrIdx;
}

void vertical_histogram_old(int array[], int *size) {

  printf("\nVertical histogram \n");
  for(int i = 0; i < *size; i++) {

    for(int z = 0; z < *size; z++) {
      int greaterArrIdx = find_max(array, size);

      if(array[greaterArrIdx] == 0) {
         break;
      }

      if(z == greaterArrIdx) {
        printf(" | ");
        array[greaterArrIdx] = --array[greaterArrIdx];
      }else {
        printf("   ");
      }
    }

    printf("\n");
  }
}

void vertical_histogram(int array[], int *size) {
  int max = find_max(array, size);

  for(int level = max; level > 0; --level){
    for(int i = 0; i < *size; i++) {
      if(array[i] >= level){
        printf(" |-| ");
      }else {
        printf("     ");
      }
    }
    printf("\n");
  }

  for(int i = 0; i < *size; i++) {
    printf("  -  ");
  }

  printf("\n");

  for (int i = 0; i < *size; i++) {
    printf("  %d  ", array[i]);
  }
}

int main() {
  int c;
  int idx = 0;
  int ndigit[] = {2, 3, 9, 1, 2, 9, 8, 7 ,6, 4};

  // 10 / 4;
  int n = sizeof(ndigit) / sizeof(ndigit[0]);


  print_array(ndigit, &n);
  horizontal_histogram(ndigit, &n);
  vertical_histogram(ndigit, &n);

  return 0;
}
