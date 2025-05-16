#include <stdio.h>

/* copy input to ouput; 1st version */
int main() {
  int c;
  // while (c != EOF) {
  //   putchar(c);
  //   c = getchar();
  // }
  // Trying with assignment inside while loop eval
  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  return 1;
}
