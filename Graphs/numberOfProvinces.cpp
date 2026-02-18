#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> isConnected = {
		{1, 1, 0},
		{1, 1, 0},
		{0, 0, 1}};

	// cout << isConnected.size();

	int n = 3;
	vector<vector<int>> adj(n, vector<int>(n));
	// vector<vector<int>> adj;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (isConnected[i][j] == 1 && i != j){
				adj[i].push_back(j);
			}
		}
	}

	for (auto &i : adj)
	{
		for (auto j : i)
		{
			cout << j << " ";
		}
		cout << "\n";
	}

	return 0;
}