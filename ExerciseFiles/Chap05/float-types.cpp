// float-types.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	float f;
	double df;
	long double ldf;

	cout << "size of float f is " << sizeof(f) << endl;
	cout << "size of double float df is " << sizeof(df) << endl;
	cout << "size of long double float ldf is " << sizeof(ldf) << endl;

  f = 0.1;
  f += 0.1 + 0.1;
  cout << "f is " << f << endl;

  // below is false despite the fact that
  // the above outputs 0.3, this shows
  // that if you want accuracy you should be using
  // integers

  if (f == 0.3) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

	return 0;
}
