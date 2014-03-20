// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {

  // this..
  for (int x = 5; x; --x) {
    printf("x is %d\n", x);
  }

  // same as this...
  int x = 5;
  while(x) {
    printf("x is %d\n", x);
    --x;
  }

  // using integer pointers to step through arrays
  int ia[] = { 1, 2, 3, 4, 5, 0 };
  // *ip tests if value is null
  for ( int *ip = ia; *ip; ++ip ) {
    printf("value is %d\n", *ip);
  } 

  return 0;
} 

