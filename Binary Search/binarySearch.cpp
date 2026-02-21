#include <iostream>
#include <vector>
using namespace std;

int iterativeBinarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    // Continue the loop as long as the search space is valid (low <= high).
    while (low <= high) {
        // Calculate the middle index to prevent potential integer overflow.
        int mid = low + (high - low) / 2;

        // Check if the target is present at the middle.
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is greater than the middle element, ignore the left half.
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If the target is smaller, ignore the right half.
        else {
            high = mid - 1;
        }
    }

    // If the loop finishes without finding the element, the target is not in the array.
    return -1;
}

int recursiveBinarySearch(vector<int>& arr, int low, int high, int key) {
    // Base case: If the search space is empty, the element is not found
    if (low > high) {
        return -1;
    }

    // Calculate the middle index to avoid potential overflow
    int mid = low + (high - low) / 2;

    // If the key is present at the middle itself, return the index
    if (arr[mid] == key) {
        return mid;
    }
    // If the key is smaller than the middle element, it can only be present in the left subarray
    else if (arr[mid] > key) {
        return recursiveBinarySearch(arr, low, mid - 1, key);
    }
    // If the key is greater than the middle element, it can only be present in the right subarray
    else {
        return recursiveBinarySearch(arr, mid + 1, high, key);
    }
}

int main() {

	return 0;
}