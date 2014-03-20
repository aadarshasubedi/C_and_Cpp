// goto.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {
	printf("Before the goto.\n");

  // when goto is encountered it skips
  // to goto location, in this case
  // target
	goto target;
	printf("After the goto.\n");
	target:
	printf("After the target.\n");


  // break quits
  // continue will skip eveything
  // after the continue and go back to the top
  // of the loop (skips one interation
  for (int i = 0; i < 10; ++i) {
    if (i == 5) break;
    printf("i is %d\n", i);
  }

	return 0;
}
