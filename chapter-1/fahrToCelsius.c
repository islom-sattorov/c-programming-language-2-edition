#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void celsiusToFahr(const char *title) {
  float fahr, celsius;
  float lower, upper, step;

  lower = -100;
  upper = 100;
  step = 10;

  celsius = lower;
  printf("%s: \n", title);

  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32;
    printf("Celsius: %3.0f\t Fahrenheit: %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

void fahrenheitToCelsiusWithFor(const char *title) {

  for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

int main() {
  char title[28] = "Fahrenheit-Celsius table";
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%s: \n", title);

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("Fahrenheit: %3.0f\t Celsius: %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  celsiusToFahr(title);
  fahrenheitToCelsiusWithFor(title);

  return 0;
}
