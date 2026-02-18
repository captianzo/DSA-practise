#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> arr1 = {1,1,2,3,4,5};
	vector<int> arr2 = {2,3,4,4,5,6};
	int n1 = arr1.size();
	int n2 = arr2.size();
	int i = 0, j = 0;
	vector<int> union_array;

	while (i < n1 && j < n2)
	{
		if (arr1[i] <= arr2[j]){
			if (union_array.size() == 0 || union_array.back() != arr1[i]){
				union_array.push_back(arr1[i]);
			}
			i++;
		}
		else{
			if (union_array.size() == 0 || union_array.back() != arr2[j]){
				union_array.push_back(arr2[j]);
			}
			j++;
		}
	}
	while(i < n1){
		if (union_array.size() == 0 || union_array.back() != arr1[i]){
				union_array.push_back(arr1[i]);
			}
			i++;
	}
	while(j < n2){
		if (union_array.size() == 0 || union_array.back() != arr2[j]){
				union_array.push_back(arr2[j]);
			}
			j++;
	}

	for (auto it : union_array){
		cout << it << " ";
	}
	
	return 0;
}