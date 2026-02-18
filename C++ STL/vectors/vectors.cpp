#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int, int>> v2;
	v2.push_back({3, 4});
	v2.emplace_back(5, 6);

	vector<int> v3(5, 100); // a container with {100, 100, 100, 100, 100} is declared
	vector<int> v4(5);		// a container with {0, 0, 0, 0, 0} is declared

	vector<int> v5(5, 20); // a container with {20, 20, 20, 20, 20} is declared
	vector<int> v6(v5);	   // v5 will be copied into v6

	// vectors are dynamic and their values can be encreased easily
	// if you try to push_back any element in v4 after 5 elements already there, it will simply increase its size by 1 and add another element

	cout << v5[0] << endl;

	// for accessing the vector
	vector<int>::iterator it = v5.begin(); // this will point to the memory of the first element of the vector

	// vector<int>::iterator it = v5.end(); this will point at the address just after the last element of v5, if you want to access the last element of v5, do it--;

	// vector<int>::iterator it = v5.rend(); this will reverse the vector first and point after it, but that will now be pointing before the first element
	// v5 looks like {40, 30, 20 , 10}
	//              ^ -> it will point here

	// vector<int>::iterator it = v5.rbegin(); this will reverse the vector first and point before it, but that will now be pointing after the last element
	// v5 looks like {40, 30, 20 , 10}
	//                                ^ -> it will point here

	cout << v5.back() << " " << endl; // this will print the last element of v5

	for (vector<int>::iterator i = v5.begin(); i != v5.end(); i++)
	{
		cout << *i << " ";
	}
	cout << "\n";

	// or you can easily simplify it like this

	for (auto i = v5.begin(); i != v5.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	vector<int> v7 = {10, 20, 30, 40, 50, 60, 70};
	v7.erase(v7.begin() + 1, v7.begin() + 4);

	for (auto i = v7.begin(); i != v7.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	// insert
	v7.insert(v7.begin(), 35);
	for (auto i = v7.begin(); i != v7.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	v7.insert(v7.begin() + 3, 2, 35);
	for (auto i = v7.begin(); i != v7.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	
	vector<int> v8 = {50,50};
	v7.insert(v7.begin(), v8.begin(), v8.end());

	for (auto i = v7.begin(); i != v7.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	
	cout << v7.size();

	v7.pop_back(); // pops the last element
	for (auto i = v7.begin(); i != v7.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	// v1 -> {10,20}
	// v2 -> {30,40}
	// v1.swap(v2); v1 -> {30,40} v2 -> {10,20}

	cout << v8.empty();
	v8.clear();
	// this will clear all the elements and v8 is now an empty vector
	
	cout << v8.empty();
	// this shows false if your vector as at least 1 element, and shows true if your vector has no elements

	return 0;
}