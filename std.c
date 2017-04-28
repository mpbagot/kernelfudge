#include "std.h"

void strcat(char p[], char q[]) {
  /*
  * Why Doesn't this work!!!?!?!?!?!?!?!?!?!
  * all I need to do is concatenate these strings!!!!!!!!!!!
  * I hate my life.
  */
  int c,d;

  c = strlen(p);

  d = 0;

  while(q[d] != '\0') {
    p[c] = q[d];
    ++d;
    ++c;
  }
  p[c] = '\0';
}
void wait(int mseconds){
  int c = 1, d = 1;

  for ( c = 1 ; c <= mseconds*8 ; c++ ) {
    for ( d = 1 ; d <= mseconds*8 ; d++ ) {}
  }
   return;
}
int strlen(char *str) {
  int c = 0;
  while (*(str+c))
    c++;
  return c+1;
}
char strcut(int cutLength, char str[]) {
  char final[2000];
  int c = 0;

  while (str[c+cutLength] != '\0') {
    final[c] = str[c+cutLength];
    ++c;
  }
  return *final;
}
