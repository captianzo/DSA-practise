#include <iostream>
#include <map>
using namespace std;

// map is a container that stores everything in the form of {key, values}
// key can be of any data type (int, float, double, pair)
// similarly value can also be any data type

// MAP STORES UNIQUE KEYS IN SORTED ORDER
// that means the keys are unique and map is sorted according to the keys

// a TREE STRUCTURE is maintained for map
// almost all actions take O(logn) time and worst case takes O(n) time

int main()
{
	map<int, int> mp1;
	map<int, pair<int, int>> mp2;
	map<pair<int, int>, int> mp3;

	mp1[1] = 2; // on key 1 -> value 2 will be stored
	// [{1,2}]
	mp1.emplace(std::make_pair(3, 1)); // on key 3 -> value 1 will be stored
	// [{1,2},
	//	{3,1}]

	mp1.insert({2, 4});
	// [{1,2},
	//  {2,4},
	//  {3,1}]

	// difference between insert and emplace is that insert constructs a temporary object then copies or moves it
	// while emplace constructs the object in place so less overhead and might be more efficient

	for (auto i : mp1)
	{
		// it stores key and value in form of pair, so key will be mp1.first and value will be mp1.second
		cout << i.first << "->" << i.second;
		cout << "\n";
	}

	cout << mp1[1] << "\n"; // for key 1 -> value is 2
	cout << mp1[4] << "\n"; // for key 5 -> no value so stores NULL and prints 0

	// to find the address of a specific a key-value, use find which gives the iterator pointing to that address
	auto it = mp1.find(3); // this gives the iterator pointing to {3,1}
	cout << (*it).second << "\n"; // printing the value for key 3

	auto it2 = mp1.find(5); 
	// there is no key 5 so it will point to mp1.end() [after the last element]
	
	auto it3 = mp1.lower_bound(2);
	auto it4 = mp1.upper_bound(3);

	// erase, swap, size, empty are same as other containers

	return 0;
}