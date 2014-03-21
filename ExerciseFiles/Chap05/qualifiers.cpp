// qualifiers.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
  for (int i = 0; i < 5; ++i) {
    // static stores variables in a separate space
    // so it doesn't get reinitiliazed on each 
    // iteration of the loop
    static int j = 12;
    j += i;
    printf("i is %d, j is %d\n", i, j);
  }
	return 0;
}

