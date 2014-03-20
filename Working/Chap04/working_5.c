// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

// backslash allows use to make
// multi-line macros
#define SWAP(a,b) do { \
                    a ^= b; \
                    b ^= a; \
                    a ^= b; \
                  } while(0)

int main( int argc, char ** argv ) {
  int _this = 7;
  int _that = 9;
  printf("this is %d and that is %d\n", _this, _that);
  SWAP(_this, _that);
  printf("Hello, World!\n");
	return 0;
}




