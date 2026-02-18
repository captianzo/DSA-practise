#include <iostream>
#include <queue>
using namespace std;

// QUEUE IS FIFO - FIRST IN FIRST OUT
// ALL THE OPERATIONS IN QUEUE ARE O(1) COMPLEXITY

int main() {
	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.emplace(4);

	q.back() += 5; // q.back() will give me the last element that went in
	cout << q.back();
	cout << q.front(); // q.front() will give me the first element that went in

	q.pop(); // this will pop the first element

	// size, swap and empty will be same as stack
	
	return 0;
}