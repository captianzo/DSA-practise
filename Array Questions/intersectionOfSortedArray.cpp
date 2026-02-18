#include <iostream>
#include <vector>
using namespace std;

void bruteSol(vector<int> arr1, vector<int> arr2)
{
	vector<int> visited;
	for (int i = 0; i < arr1.size(); i++)
	{
		for (int j = 0; j < arr2.size(); j++)
		{
			if (!visited.empty())
			{
				if (arr1[i] == arr2[j] && arr1[i] != visited.back())
				{
					visited.push_back(arr1[i]);
					break;
				}
			}
			else{
				if (arr1[i] == arr2[j]){
					visited.push_back(arr1[i]);
					break;
				}
			}
		}
	}
	for (auto it : visited)
	{
		cout << it << " ";
	}
}

void optimalSol(vector<int> arr1, vector<int> arr2){
	vector<int> intersection;
	int i = 0, j = 0;
	while (i < arr1.size() && j < arr2.size())
	{
		if (arr1[i] < arr2[j])
			i++;
		else if (arr1[i] > arr2[j])
			j++;
		else{
			if (!intersection.empty()){
				if (intersection.back() != arr1[i]){
					intersection.push_back(arr1[i]);
					i++;
					j++;
				}else{
					i++;
					j++;
				}
			}
			else{
				intersection.push_back(arr1[i]);
				i++;
				j++;
			}
		}
	}
	
}

int main()
{
	vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
	vector<int> arr2 = {2, 3, 5, 6, 6, 7};
	bruteSol(arr1, arr2);
	return 0;
}