#include <stdio.h>

/* Print the value of EOF */

int main() {
  int c;
  while (c != EOF) {
    putchar(c);
    printf("\n");
    c = getchar();
    printf("EOF: %d", EOF);
    printf("\n");
  }

  return 1;
}
