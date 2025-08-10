#include <stdio.h>

int power(int, int);
double fahrenheitToCelsius(int fahr);
double celsiusToFahrenheit(int cel);

int main(){
  for (int i = 0; i < 10; ++i){
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }

  for(int i = 0; i < 10; ++i){
    printf("%d %f\n", i, fahrenheitToCelsius(i));
  }

  for(int i = 0; i < 10; ++i){
    printf("%d %f\n", i, celsiusToFahrenheit(i));
  }
  return 0;
}

double celsiusToFahrenheit(int cel) {
  return 9.0 / 5.0 * cel + 32;
}

double fahrenheitToCelsius(int fahr) {
  return (5.0 / 9.0) * (fahr - 32);
}

// power: raise base to n-th power; n >= 0
int power(int base, int n){
  int p;

  for(p = 1; n > 0; --n) {
    p = p * base;
  }

  return p;
}
