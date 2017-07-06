#include <stdio.h>
#include "power.c"
#define BYTESIZE 8


int main() {
  int bitstring[BYTESIZE];
  char character;
  int i, current;


  printf("Type the character to convert: ");
  scanf("%c", &character);

  i = 0; 
  while ((current = power(2, i)) < character) {
    switch (character & current) {
      case 0:
        bitstring[BYTESIZE-1-i] = 0;
        break;
      default:
        bitstring[BYTESIZE-1-i] = 1;
        break;
    }
    i++;
  }

  while (i < BYTESIZE) {
    bitstring[BYTESIZE-1-i] = 0;
    i++;
  }
  
  for (i=0; i<BYTESIZE; i++) {
    printf("%d", bitstring[i]);
  }
  printf("\n");
}

