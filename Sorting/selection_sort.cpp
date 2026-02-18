#include <iostream>
using namespace std;

void selection(int arr[], int n){
	int temp;
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[min]){
				min = j;
			}
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

int main() {
	int n;
	cout << "Enter array size: ";
	cin >> n;
	int arr[n];

	cout << "Enter array:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Element: ";
		cin >> arr[i];
	}

	selection(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}