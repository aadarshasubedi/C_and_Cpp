// func.c by Bill Weinman <http://bw.org/>
#include <stdio.h>
#include "func.h"

int main( int argc, char ** argv ) {
	func();

  // you used to have to declare int i
  // outside of the loop
  for(int i = 0; i < 5; ++i) {
	  printf("i is %d\n", i);
  }

	return 0;
}

// definition
void func() {
	printf("this is in the function\n");
}
