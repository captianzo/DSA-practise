#include <iostream>
#include <set>
using namespace std;

// EVERYTHIG SAME AS SET, BUT ALSO STORES DUPLICATES
// {1,1,1,2,2,3,3,3,3,4,4,} like this ( IT WILL BE SORTED BUT DUPLICATES ALLOWED)

int main() {
	multiset<int> ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);

	for (auto i = ms.begin(); i != ms.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	
	int count = ms.count(1);
	cout << count << endl;
	
	ms.erase(1); // this will erase all the occurences of 1
	count = ms.count(1);
	
	cout << count << endl;
	for (auto i = ms.begin(); i != ms.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(1); // {1,1,1,1,2,2}

	ms.erase(ms.find(1)); // difference between this is that using ms.erase(1) will remove all occurences of 1
	                      // but using ms.erase(find(1)) will get the address of first occurence of 1 and delete that address, so only that occurence is deleted rest all are left untouched

	ms.erase(ms.find(1), ms.find(1)+2);
	for (auto i = ms.begin(); i != ms.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	return 0;
}