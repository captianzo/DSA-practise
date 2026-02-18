#include <iostream>
using namespace std;

void insertion(int arr[], int n){
	int temp, j;
	for (int i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j>=0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
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

	insertion(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}