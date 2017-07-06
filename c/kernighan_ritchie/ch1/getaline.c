#include <stdio.h>

int getaline(char s[], int lim) {
  int c, i;
  for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  return i;
}
