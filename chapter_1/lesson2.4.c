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

  printf("Celsius\tFahrenheit\n");
  while (celsius <= upper) {
    fahr = 32 + (celsius * (9.0 / 5.0));
    printf("%3.0f\t%6.2f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 1;
}
