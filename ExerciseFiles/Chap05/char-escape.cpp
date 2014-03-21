// char-escape.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char string[] = "This is \' \" \\ \x40 a string.";

	cout << string << endl;
	return 0;
}
