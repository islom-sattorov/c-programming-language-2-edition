#include <math.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
  if (n <= 0) {
    return false;
  }

  double k = log(n) / log(3);

  return fabs(k - round(k)) < 1e-12;
}
