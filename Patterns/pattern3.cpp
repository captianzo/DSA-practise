// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

void pattern(int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << (j+1);
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n; 
	pattern(n);
	
	return 0;
}