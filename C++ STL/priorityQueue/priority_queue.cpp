#include <iostream>
#include <queue>
using namespace std;

// LARGEST (MAXIMUM) ELEMENT STAYS AT THE TOP (FIRST IDNEX) (DESCENDING)
// IF USING STRING THEN LEXICOGRAPHICALLY THE LARGEST STRING WILL BE AT THE TOP

// IT IS NOT A LINEAR DATA STRUCTURE - INSIDE OF IT, A TREE DATA STRUCTURE IS MAINTAINED

int main()
{
	priority_queue<int> pq;

	// push happens with complexity of O(logn)
	// top happens with complexity of O(1)
	// pop happens with complexity of O(logn)

	pq.push(5);		// {5} 
	pq.push(1);		// {5,1}
	pq.push(2);		// {5,2,1}
	pq.emplace(10); // {10,5,2,1}

	cout << pq.top() << endl;

	pq.pop(); // {5,2,1}
	cout << pq.top() << endl;

	// size, swap and empty are same as others

	// minimum heap (store least element at the top) (ascending)
	priority_queue<int, vector<int>, greater<int>> pqm;
	pqm.push(5);	 // {5}
	pqm.push(6);	 // {5,6}
	pqm.push(1);	 // {1,5,6}
	pqm.emplace(12); // {1,5,6,12}

	cout << pqm.top() << endl;

	return 0;
}