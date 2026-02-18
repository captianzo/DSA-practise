// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

void pattern(int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		for (int k = 0; k < n-i; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j > i; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
}

int main()
{
	int n;
	cin >> n;
	pattern(n);

	return 0;
}