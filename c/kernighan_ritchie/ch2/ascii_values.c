#include <stdio.h>

int main() {
  
  int i;

  for (i='A'; i<='z'; i++) {
    printf("%c: %d\n", i, i);
  }
  return 0;
}
