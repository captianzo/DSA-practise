#include <iostream>
#include <map>
using namespace std;

// BOTH STORING AND FETCHIG DATA HAS TIME COMPLEXITY O(LOGN) IN MAP
// BEST, WORST AND AVERAGE ALL CASES TC IS O(LOGN)

int main() {
	int n;
	cout << "Enter size of input array: ";
	cin >> n;
	char arr[n];
	map<char, int> mpp;
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