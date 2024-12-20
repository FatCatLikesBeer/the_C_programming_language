#include <stdio.h>

/* print Fahrenheit-Celsius table
 for fahr = 0, 20 ..., 3000 */

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temp table */
  upper = 300; /* upper limit */
  step = 20;   /* step */

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.3f %6.3f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 1;
}
