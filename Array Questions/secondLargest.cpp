#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> arr = {1,2,3,7,7,5,6,10,2,9};
	int largest = arr[0], sLargest = -1;
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] > largest){
			sLargest = largest;
			largest = arr[i];
		}
		if (arr[i] > sLargest && arr[i] < largest)
			sLargest = arr[i];
	}
	cout << "Largest : " << largest << "\n";
	cout << "Second Largest: " << sLargest << "\n";
	return 0;
}