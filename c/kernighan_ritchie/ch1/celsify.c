#include <stdio.h>
#include <stdlib.h>

int convert_to_celsius(int f);

int main(int argc, char *argv[]) {
  int f;

  printf("%d\n", convert_to_celsius(atoi(argv[1])));
  return 0;
}

/* convert_to_celsius: takes in a termperature in fahrenheit and converts it to celsius */
int convert_to_celsius(int f) {
  return 5 * (f - 32) / 9;
}
