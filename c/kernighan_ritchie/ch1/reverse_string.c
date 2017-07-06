#include <stdio.h>
#define MAXLENGTH 1000

void reverse(char line[], char reversed[], int length);
int getaline(char line[], int maxlength);

int main() {
  
  int len; 
  char line[MAXLENGTH];
  char reversed[MAXLENGTH];

  printf("Type something: ");
  len = getaline(line, MAXLENGTH);
  reverse(line, reversed, len);
  printf("This is what you typed: %s\n", line);
  printf("This is the reversed version: %s\n", reversed);
  return 0;
}

int getaline(char s[], int lim) {
  int c, i;
  for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  return i-1;
}

void reverse(char line[], char reversed[], int length) {
  int i = length;
  
  while ((reversed[length-i] = line[i])) {
    --i;
  }
}
