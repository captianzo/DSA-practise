#include <iostream>
using namespace std;

// works with containers that allow random access
// so works with vectors and arrays
// deque storage isnt contiguous, but it still allows random access of iterators so sort() function works for it


// when writing a comparator, think of having 2 pairs and try to analyze p1 and p2
bool comp(pair<int, int> p1, pair<int, int> p2){
	if (p1.second < p2.second) return true;
	if (p1.second > p2.second) return false;
	// else they are same
	if (p1.first > p2.first) return true;
	return false;
}

int main(){
	sort(a, a+n);
	sort(v.begin(),v.end());

	// so basic syntax for sort is
	// sort(starting index, ending index)
	// in which the elements are included as [startIndex, endIndex)

	sort(a, a+n, greater<int>);
	// this allows for sorting in descending order

	pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

	// sort it according to second element
	// if second element is same, then sort it according to first element but in descending

	sort(a, a+n, )

	return 0;
}