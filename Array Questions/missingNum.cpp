#include <iostream>
using namespace std;

int main() {
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,2,4,5};

	int XOR1 = 0, XOR2 = 0;

	for (int i = 0; i < 4; i++)
	{
		XOR2 = XOR2^arr2[i];
		XOR1 = XOR1^(i+1);
	}
	XOR1 = XOR1^5;
	int result = XOR1^XOR2;
	cout << result;

	return 0;
}