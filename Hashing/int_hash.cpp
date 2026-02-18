#include <iostream>
using namespace std;

int main() {
	// max 6
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// assuming max 6
	int hash[6] = {0};
	for (int i = 0; i < n; i++)
	{
		hash[arr[i]] += 1;
	}

	int target;
	cout << "Enter target: ";
	cin >> target;

	cout << "Target count: " << hash[target] << endl;
	
	return 0;
}