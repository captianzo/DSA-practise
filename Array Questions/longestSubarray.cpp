#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	int k = 3;
	vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
	map<long long, int> preSumMap;
	long long sum;
	int maxLen = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum+=arr[i];
		if (sum == k){
			maxLen = max(maxLen, i+1);
		}
		long long rem = sum - k;
		if (preSumMap.find(rem) != preSumMap.end()){
			int len = i - preSumMap[rem];
			maxLen = max(maxLen, len);
		}
		preSumMap[sum] = i;
	}
	
	cout << "Max Length: " << maxLen;

	return 0;
}