#include <iostream>
using namespace std;

int main() {
	pair<int, int> p = {1,3};	
	cout << p.first << " " << p.second << "\n";

	pair<int , pair<int, int>> p1 = {1,{3,4}};
	cout << p1.first << " " << p1.second.first << " " << p1.second.second << "\n";

	pair<int, int> arr[] = {{1,3}, {2,4}, {5,6}};
	cout << arr[1].first;
	return 0;
}