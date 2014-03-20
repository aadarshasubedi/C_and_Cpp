// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

// constant
#define ONE (1)
#define TWO   (2)
#define THREE (3)
#define FOUR  (4)


int main( int argc, char ** argv ) {
  int foo = 3;

  // multi-way switch/conditional
  // case labels have to be integers
  switch(foo) {
    case ONE:
      puts("one");
      break;
    case TWO:
      puts("two");
      break;
    case THREE:
      puts("three");
      break;
    case FOUR:
      puts("four");
      break;
  }
  return 0;
} 



