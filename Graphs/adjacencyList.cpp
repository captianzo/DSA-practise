#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n+1];

	// graph will be stored in this way
	// TC = 
	// SC = O(2m) [2 * edges]

	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;

		// for undirected graph, store the edge both ways
		adj[u].push_back(v);
		adj[v].push_back(u);
		
		// but for directed graph, only store it one way
		// adj[u].push_back(v);
		// for directed graph, SC = O(m) or O(E), since we are not storing the other way
	} 

	return 0;
}