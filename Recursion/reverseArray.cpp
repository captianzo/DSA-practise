#include <iostream>
using namespace std;

// using 2 variables

// void reverse(int left, int arr[], int right){
// 	if (left >= right){
// 		return;
// 	}
// 	int temp = arr[left];
// 	arr[left] = arr[right];
// 	arr[right] = temp;
// 	reverse(left+1, arr, right-1);
// }

// using 1 variable
void reverse(int i, int n, int arr[]){
	if (i >= n/2){
		return;
	}
	int temp = arr[i];
	arr[i] = arr[n-i-1];
	arr[n-i-1] = temp;
	reverse(i+1, n, arr);
}

int main() {
	int left = 0, n = 6;
	int arr[] = {1,2,3,4,5,6};
	reverse(left, n, arr);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}