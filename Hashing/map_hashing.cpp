#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	cout << "Enter size of input array: ";
	cin >> n;
	int arr[n];
	map<int, int> mpp;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element: ";
		cin >> arr[i];
		mpp[arr[i]]++;
	}

	// MAP STORES ALL THE KEYS IN SORTED ORDER

	for (auto it : mpp){
		cout << it.first << " -> " << it.second << "\n";
	}
	
	// int target;
	// cout << "Enter target: ";
	// cin >> target;
	
	// cout << "Target count: " << mpp[target];
	return 0;
}