#include <iostream>
using namespace std;

int main()
{
	string s = "123";

	do
	{
		cout << s << endl;
	} while (next_permutation(s.begin(), s.end())); // rearranges the sequence into the next lexicographically greater permutation.
	// it returns true if it can rearrange in the next permutation
	// returns false if the sequence was last permutation (after this it will sort the sequence to the smallest again)

	// next_permutation returns false when no greater permutation exists
	// and rearranges the sequence back to the smallest (ascending) order

	return 0;
}