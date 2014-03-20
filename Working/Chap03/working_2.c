// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {
  char s[] = "string";
  // char s[] = { 's', 't', 'r', 'i', 'n', 'g', 0 };
  printf("string is: %s\n", s);
  
  // character pointer
  for (char * cp = s; *cp; ++cp) {
    printf("char is %c\n", *cp);
  }
  return 0;
} 

