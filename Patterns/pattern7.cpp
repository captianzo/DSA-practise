//     *  
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

void pattern(int n){
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n-i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < ((i*2)-1); k++)
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