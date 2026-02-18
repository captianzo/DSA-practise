#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
	int i = 0;
	for (int j = 1; j < arr.size(); j++)
	{
		if(arr[j]!=0){
			i++;
			swap(arr[i],arr[j]);
		}
	}

	for (auto it : arr){
		cout << it << " ";
	}
	
	return 0;
}