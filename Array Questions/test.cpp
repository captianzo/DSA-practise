#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> A = {1,2,3,4,5};
	vector<int> B = {3,4,5,1,2};

	

	for (int i = 0; i < A.size(); i++)
	{
		cout << B[i] << " " << A[(i+x)% A.size()];
	}
	

	return 0;
}