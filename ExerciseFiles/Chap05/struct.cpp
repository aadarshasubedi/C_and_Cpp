// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;


// struct is a Data Structure
//
// this has character pointers and integers
struct employee {
	int id;
	const char * name;
	const char * role;
};

int main( int argc, char ** argv ) {

  // in c++ you actually don't need to declare
  // struct here
	struct employee joe = { 42, "Joe", "Boss" };
  struct employee *ep = &joe;

	printf("%s is the %s and has id %d\n",
			joe.name, joe.role, joe.id);

	printf("%s is the %s and has id %d\n",
		ep->name, ep->role, ep->id);

	return 0;
}
