#include <bits/stdc++.h>
using namespace std;
class NumMatrix {
public:
    vector<vector<int>> prefixsum;
    NumMatrix(vector<vector<int>>& matrix){
        int m = matrix.size();
        int n = matrix[0].size();
        prefixsum = vector<vector<int>>(m + 1, vector<int> (n + 1, 0));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                prefixsum[i][j] = matrix[i - 1][j - 1] + prefixsum[i - 1][j] + prefixsum[i][j - 1] - prefixsum[i - 1][j - 1];
            }
        }
    }
    int sumregion(int row1, int col1, int row2, int col2) {
        row1++;
        row2++;
        col1++;
        col2++;
        return prefixsum[row2][col2] - prefixsum[row1 - 1][col2] - prefixsum[row2][col1 - 1] + prefixsum[row1 - 1][col1 - 1];
    }
};