#include <iostream>
 #include <unordered_map>
using namespace std;

// NO ORDER IS MAINTAIED FOR KEYS

int main() {
	int n;
	cout << "Enter size of input array: ";
	cin >> n;
	int arr[n];
	unordered_map<int, int> mpp;
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