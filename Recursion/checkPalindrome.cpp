#include <iostream>
using namespace std;

bool checkPalindrome(int i, int n, string s){
	if (i >= n/2) return true;
	if (s[i] != s[n-i-1]){
		return false;
	}
	return checkPalindrome(i+1, n, s);
}

int main() {
	int i = 0;
	string s = "naman";
	int n = s.length();
	if (checkPalindrome(i, n, s)){
		cout << "It is a palindrome!";
	}
	else{
		cout << "Its not a palindrome!";
	}
	return 0;
}