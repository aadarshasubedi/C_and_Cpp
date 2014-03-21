// c-strings.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
  // length is one longer than the number of chars
  // because of the built in null terminator
	char cstring[] = "String";

  cout << "length of array: " << sizeof(cstring) endl;
	cout << cstring << endl;

	for( unsigned int i = 0; cstring[i]; i++) {
		printf("%02d: %c\n", i, cstring[i]);
	}
	return 0;
}

