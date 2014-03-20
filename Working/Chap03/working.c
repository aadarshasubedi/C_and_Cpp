// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

extern int var;
extern void func();

int main( int argc, char ** argv ) {
  func();
  printf("the extern var is %d\n", var);
  for(int i = 1; i <= 5; ++i) {
    register int number = 7;
    printf("number is %d\n", number++);
  }
  return 0;
} 
