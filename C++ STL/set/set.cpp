#include <iostream>
#include <set>
using namespace std;

// SET STORES EVERYTHING IN THE SORTED ORDER1 {1,2,3,4,5}
// EVERYTHING IN A SET IS UNIQUE, NO REPEATED ELEMENTS

// IT IS NOT A LINEAR DATA STRUCTURE - INSIDE OF IT, A TREE DATA STRUCTURE IS MAINTAINED

// IN SETS ALL THE ACTIONS ARE O(LOG(N))

int main()
{
	set<int> s;
	s.insert(1); // {1}

	s.emplace(2); // {1,2}
	s.insert(2);  // {1,2} 2 already there

	s.insert(4); // {1,2,4}
	s.insert(3); // {1,2,3,4}

	s.insert(12);
	s.insert(13);
	s.insert(14);
	s.insert(15); // {1,2,3,4,12,13,14,15}

	auto i = s.find(3); // this will return the iterator that points(points to the address) to '3'

	auto it = s.find(6); // if this element is not in the set, then it will point to set.end() ,i.e, it will point to the position right after the last element

	s.erase(4); // will erase 4 from the set and will still maintian the sorted order (takes logn time)
	// {1,2,3,12,13,14,15}

	int cnt = s.count(3); // if 3 is present, it will give 1 or if its not there, it will give 0

	s.erase(i); // this will erase whatever i is pointing to [time complexity O(1)]

	cout << *it << endl;

	// ERASER
	auto it1 = s.find(2);
	auto it2 = s.find(13);

	s.erase(it1, it2); // it1 included and it2 not included [it1,it2)

	for (auto j = s.begin(); j != s.end(); j++)
	{
		cout << *j << " ";
	}

	// size, empty, swap all functions similar to others
	// most IMP for set are find, count, insert, erase

	return 0;
}