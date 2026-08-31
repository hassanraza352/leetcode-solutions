class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
         int sum = 0;

 int rows = arr.size();
 int col = arr[0].size();
 for (int i = 0; i < rows; i++) {
     sum += arr[i][i];

     if (i != col - 1 - i) {
         sum += arr[i][col - 1 - i];
     }
 }
 return sum;
    }
};