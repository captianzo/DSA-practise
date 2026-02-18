#include <iostream>
#include <deque>
using namespace std;

// deque is the same as list and vector not much difference

void explainDeque()
{
	deque<int> dq;

	dq.push_back(1); // (1)
	dq.push_back(2); // (1, 2)

	dq.push_front(4); // (4, 1, 2)

	dq.pop_front(); // (1, 2)
	dq.pop_back();	// (1)

	dq.emplace_back(2);	 // (1, 2)
	dq.emplace_front(3); // (3, 1, 2)

	cout << dq.back() << endl;	// prints last element
	cout << dq.front() << endl; // prints first element

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}