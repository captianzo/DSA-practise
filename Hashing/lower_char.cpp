#include <iostream>
using namespace std;

int main() {
	string s;
	cout << "Enter string: ";
	cin >> s;
	
	// pre compute
	int hash[26] = {0};
	for (int i = 0; i < s.size(); i++)
	{
		hash[s[i] - 'a']++;
	}

	char target;
	cout << "Enter target: ";
	cin >> target;
	
	cout << "Target count: " << hash[target-'a'] << endl;

	return 0;
}