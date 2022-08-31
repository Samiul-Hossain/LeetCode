class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int temp, temp2, temp3, temp4;
        vector<vector<int>> ret;
        for(int i=0; i<(n/2 + n%2); i++){
            for(int j=0; j<n/2; j++){
                temp = matrix[i][j];// 1
                temp2 = matrix[j][n-i-1];// 3
                temp3 = matrix[n-j-1][i];// 7
                temp4 = matrix[n-i-1][n-j-1];// 9
                matrix[i][j] = temp3;
                matrix[j][n-i-1] = temp;
                matrix[n-j-1][i] = temp4;
                matrix[n-i-1][n-j-1] = temp2;
            }
        }
    }
};