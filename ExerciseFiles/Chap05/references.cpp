// references.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

// Whenever you use references you should use
// const, unless there is a very good reason not to
const int & f const(int & i) {
  return ++i;
}

int main( int argc, char ** argv ) {
	int i = 5;
  // int & ir = i;
	// ir = 10;
  f(i);
	printf("i is %d\n", i); // i is 10
	return 0;
}
