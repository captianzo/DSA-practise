#include <iostream>
#include <vector>
using namespace std;

// Partition function using Lomuto/Hoare-like partitioning
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // Choose the first element as pivot
    int i = low;
    int j = high;

    while (i < j) {
        // Move i to the right until you find an element > pivot
        while (arr[i] <= pivot && i <= high) {
            i++;
        }

        // Move j to the left until you find an element <= pivot
        while (arr[j] > pivot && j >= low) {
            j--;
        }

        // If i is still less than j, swap the elements
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Place the pivot in its correct position
    swap(arr[low], arr[j]);
    return j; // Return the pivot's final position
}

// Recursive quicksort function
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);
        quicksort(arr, low, partitionIndex - 1);   // Left side
        quicksort(arr, partitionIndex + 1, high);  // Right side
    }
}

// Driver code
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
