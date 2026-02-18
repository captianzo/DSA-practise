#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> nums = {5,5,6,6,6,9,1,2};
	int pivot, min = 100;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] <= min)
		{
			min = nums[i];
			pivot = i;
		}
	}
	cout << "Pivot: " << pivot << "\n";
	int k;
	if (nums.size() == 1)
	{
		return true;
	}
	if (nums.size() == 2)
	{
		if (pivot == 0)
		{
			for (int i = 1; i < nums.size(); i++)
			{
				if (nums[i] == nums[i-1]){
					continue;
				}
				else if (nums[i] < nums[i - 1])
				{
					cout << "Not sorted";
					return 0;
				}
			}

			cout << "Sorted";
			return 0;
		}
		else
		{
			int k = nums.size() - pivot;
			cout << "Rotate by k: " << k << "\n";

			reverse(nums.begin(), (nums.begin() + k + 1));
			for (auto it : nums)
			{
				cout << it << " ";
			}
			cout << "\n";

			for (int i = 1; i < nums.size(); i++)
			{
				if (nums[i] == nums[i-1]){
					continue;
				}
				else if (nums[i] < nums[i - 1])
				{
					cout << "Not sorted";
					return 0;
				}
			}

			cout << "Sorted";

			return 0;
		}
	}
	if (pivot == 0)
	{
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == nums[i-1]){
				continue;
			}
			else if (nums[i] < nums[i - 1])
			{
				cout << "Not sorted";
				return 0;
			}
		}

		cout << "Sorted";
		return 0;
	}
	else
	{
		int k = nums.size() - pivot;
		cout << "Rotate by k: " << k << "\n";

		reverse(nums.begin(), nums.end());
		for (auto it : nums)
		{
			cout << it << " ";
		}
		cout << "\n";
		reverse(nums.begin(), (nums.begin() + k));
		for (auto it : nums)
		{
			cout << it << " ";
		}
		cout << "\n";
		reverse((nums.begin() + k), nums.end());
		for (auto it : nums)
		{
			cout << it << " ";
		}
		cout << "\n";

		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == nums[i-1]){
				continue;
			}
			else if (nums[i] < nums[i - 1])
			{
				cout << "Not sorted";
				return 0;
			}
		}

		cout << "Sorted";

		return 0;
	}
}