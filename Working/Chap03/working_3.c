// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {
  int a = 1;
  int b = 0;
  int c = ( a == 9 ) ? 7 : 9;

  printf("c is %d\n", c);

  if (a) {
    puts("this is true");
  } else if(b) { // this is called a cuddled else
      puts("this is not true");
  } else {
    puts("nothing is true");
  }


  return 0;
} 


