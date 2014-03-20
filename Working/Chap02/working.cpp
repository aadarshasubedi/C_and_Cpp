// working.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
  // cout sends things to the standard output stream
  string response;
  cout << "Type a string: " << flush;
  getline(cin, response); 
  cout << "The string is " << response << endl;
	return 0;

}
