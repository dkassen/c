#include <stdio.h>
#define LOWER -40
#define UPPER 300

int main()
{
  int fahr, celsius;
  int step = 20;

  fahr = LOWER;

  while (fahr <= UPPER) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
