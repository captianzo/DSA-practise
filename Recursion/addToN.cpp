// FUNCTIONAL RECURSION

#include <iostream>
using namespace std;

int sum(int n){
	if (n==1){
		return n;
	}
	return n + sum(n-1);
}

int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	cout << sum(n) << "\n";
	return 0;
}

// PARAMETERISED RECURSION

// #include <iostream>
// using namespace std;

// void sum(int i, int add){
// 	if (i < 1){
// 		cout << add;
// 		return;
// 	}
// 	sum(i-1, add+i);
// }

// int main() {
// 	int n, add = 0;
// 	cout << "Enter n: ";
// 	cin >> n;
// 	sum(n, add);
// 	return 0;
// }