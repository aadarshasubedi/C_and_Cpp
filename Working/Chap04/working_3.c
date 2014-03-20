// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

#define MACRO1(a,b) (a > b ? a : b)

int main( int argc, char ** argv ) {
  int _this = 5;
  int _that = 7;
  printf("this: %d, that: %d, result: %d\n",
          _this, _that, MACRO1(_this, _that));
	return 0;
}


