// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

// in preprocessor stage
// when it sees the string ONE,
// it replaces it with 1
// ---
// this is technically not C
// this is a language specific to
// the preprocessor (a simple macro)
#define ONE (1)

// alternative is this...
// this is an actual constant
// that is part of the language
const int iOne = 1;

int main( int argc, char ** argv ) {
  const int * ip = &iOne;
  printf("The constant is %d\n", *ip);

	printf("The constant is %d\n", ONE);
	return 0;
}
