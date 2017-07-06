#include <stdio.h>
#include "getaline.c"

#define MAX_INPUT_LENGTH 1000
#define MAX_LINE_LENGTH 50


int main(int argc, char *argv[]) {
  char input[MAX_INPUT_LENGTH];
  char line[MAX_LINE_LENGTH];
  int len;
  int i, j;
  
  printf("Type something: "); 
  len = getaline(input, MAX_INPUT_LENGTH);

  for (i=0; i<len; i+=MAX_LINE_LENGTH) {
    for (j=0; j<MAX_LINE_LENGTH; j++) {
      if (i+j < len) {
        line[j] = input[i+j];
      } else {
        line[j] = ' ';
      }
    }
    printf("%s\n", line);
  }
}
