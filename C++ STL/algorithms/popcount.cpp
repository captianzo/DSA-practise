#include <iostream>
using namespace std;

int main() {
	int num = 7;
	int count = __builtin_popcount(num);
	cout << count << "\n";

	// __builtin_popcount(num) returns the number of set bits (or number of 1s) when num is converted to binary
	
	long long num2 = 21592158105;
	int count2 = __builtin_popcountll(num2);
	cout << count2 << "\n";

	return 0;
}