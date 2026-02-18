// *********
//  *******
//   *****
//    ***
//     *  

#include <iostream>
using namespace std;

void pattern(int n){
	for (int i = n; i >= 1; i--)
	{
		for (int j = 0; j < n-i; j++)
		{
			cout << " ";
		}
		for (int k = ((i*2)-1); k > 0; k--)
		{
			cout << "*";
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