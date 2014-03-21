// integral-types.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {

  // signed char, which gives you at least the -128 to 127 range.
  // unsigned char, which gives you at least the 0 to 255 range.

  // Declaring variables in the 5 integer types
	char c;
	short int si;
	int i;
	long int li;
	long long int lli;

  // Displaying size of these
	cout << "size of char c is " << sizeof(c) << endl;
	cout << "size of short int si is " << sizeof(si) << endl;
	cout << "size of int i is " << sizeof(i) << endl;
	cout << "size of long int li is " << sizeof(li) << endl;
	cout << "size of long long int lli is " << sizeof(lli) << endl;

  // determine if it's signed or unsigned
	printf("c = 127\n");
	c = 127;
	printf("c is %d\n", c);
	c++;
	printf("after increment, c is %d\n", c);

	return 0;
}

