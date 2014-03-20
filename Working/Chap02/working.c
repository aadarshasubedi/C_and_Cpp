// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

// limits size of input
enum { max_length = 127 };
static char response[max_length];

int main( int argc, char ** argv ) {
  // Sends things to the console
  // fprintf(stdout, "Hello, World!\n");
  // fprintf(stderr, "Hello, World!\n");
	// printf("Hello, World!\n");
  printf("Type a string: ");
  fflush(stdout);
  // use fgets vs gets so you can define a limit of input
  fgets(response, max_length, stdin);
  printf("The string is %s\n", response);
	return 0;
}
