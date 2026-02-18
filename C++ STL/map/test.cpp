#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
	int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = 0;
        int iflag = 0;
        int jflag = 0;
        int upbound = 0;
        int lbound = 0;
        vector<int> ans;
        if (n == m && m == lbound && lbound == upbound){
            for (auto it : ans){
				cout << it;
			}
        }
        else if (iflag == 0 && jflag == 0){
            while(j < m){
                ans.push_back(matrix[i][j]);
                j++;
            }
            jflag = 1;
            m--;
            upbound++;
        }
        else if (iflag == 0 && jflag == 1){
            while(i < n){
                ans.push_back(matrix[i][j]);
                i++;
            }
            iflag = 1;
            jflag = 0;
            n--;
        }
        else if (iflag == 1 && jflag == 0){
            while (j > lbound){
                ans.push_back(matrix[i][j]);
                j--;
            }
            jflag = 1;
            lbound++;
        }
        else if (iflag == 1 && jflag == 1){
            while(i > upbound){
                ans.push_back(matrix[i][j]);
                i--;
            }
            iflag = 0;
            jflag = 0;
            lbound++;
        }
	return 0;
}