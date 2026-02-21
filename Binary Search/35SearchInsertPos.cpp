#include <iostream>
#include <vector>
using namespace std;

class Solution {
int binarySearch(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size()-1;
    int mid;
    while(low <= high){
        mid = low + (high-low) / 2;

        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target);
    }
};

int main() {
	
	return 0;
}