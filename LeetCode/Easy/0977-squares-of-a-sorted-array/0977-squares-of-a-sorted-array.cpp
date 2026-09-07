class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
          int n = arr.size();
  vector<int> arr2(n);

  int left = 0;
  int right = n - 1;

  for (int i = n - 1; i >= 0; i--) {

      int leftSquare = arr[left] * arr[left];
      int rightSquare = arr[right] * arr[right];

      if (leftSquare > rightSquare) {
          arr2[i] = leftSquare;
          left++;
      }
      else {
          arr2[i] = rightSquare;
          right--;
      }
  }

return arr2;
    }
};