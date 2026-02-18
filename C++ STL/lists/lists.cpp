#include <iostream>
#include <list>
using namespace std;

// FOR A VECTOR, A DYNAMIC ARRAY IS MAINTAIED
// FOR A LIST, A DOUBLY LINKED LIST IS MAINTAIED

// difference in lists is for vectors you had back functions like push_back, emplace_back
// but for lists you have front functions as well

int main() {
	list<int> ls;

	ls.push_back(2);
	ls.emplace_back(5);
	
	ls.push_front(10);
	ls.emplace_front(4);
	// in vectors to put at front, you have to use insert() function but here you can directly do this
	// NOTE - insertion is costly, takes a lot of time as compared to these functions
	
	// all other functions are similar to how they work in vectors
	// begin, end, rbegin, rend, clear, insert, size, swap

	return 0;
}