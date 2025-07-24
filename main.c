#include <stdio.h>
#include <stdbool.h>

void print_array(int arr[], int n) {
  for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void bubble_sort(int* arr, int n) {
  int temp;
  bool swapped = false;
  int counter = 0;

  printf("Length: %d \n", n);

  for(int i = 0; i < n; ++i){
    swapped = false;
    printf("Iteration %d: \n", counter);

    for(int j = 0; j < n - i - 1; ++j) {
      counter++;
      if(arr[j] > arr[j + 1]) {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        swapped = 1;
      }
    }

    if(!swapped) {
      break;
    }
  }

  printf("%d iterations \n", counter);
}

int main(){
  int data[] = {64, 34, 909, 25, 12, 22, 44, 4, 1, 83, 45, 76, 39};
  int n = sizeof(data) / sizeof(data[0]);

  printf("Before sorting: ");
  print_array(data, n);

  bubble_sort(data, n);

  printf("After soring: ");
  print_array(data, n);

  return 0;
}
