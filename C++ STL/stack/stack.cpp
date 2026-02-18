#include <iostream>
#include <stack>
using namespace std;

// STACK IS LIFO - LAST IN FIRST OUT
// ALL THE OPERATIONS IN STACK ARE O(1) COMPLEXITY

int main() {
	stack<int> st;

	// you generally only have push, pop and top in stack. you cant do any changes to the first element(bottom element)

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(3);
	st.emplace(5);

	cout << st.top() << endl; // this will give the last guy that was sent in

	st.pop(); // last guy went in will be removed
	
	cout << st.size() << endl; // will give the size of the stack

	cout << st.empty() << endl; // this will check if the stack is empty
	
	stack<int> st1, st2;
	st1.swap(st2); // this will swap st1 with st2
	
	return 0;
}