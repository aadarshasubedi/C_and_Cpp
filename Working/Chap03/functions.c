// func.c by Bill Weinman <http://bw.org/>
#include <stdio.h>
// #include "func.h"


// int * x and *x mean you are using
// the values as a pointer (meaning 
// you can actually change the value:w
int func_reference( int * x ) {
  int i = 0;
  *x = 100;
  i += *x;
  return i;
}

int func_value( int x ) {
  int i = 0;
  x = 100;
  i += x;
  return i;
}

int main( int argc, char ** argv ) {
  printf("Hello, World!\n");
 
  int y = 50; 
  int z = func_value(y);
  int x = func_reference(&y);

  printf("value is %d\n", x);
  printf("value is %d\n", z);
  printf("y is %d\n", y);
	return 0;
}
