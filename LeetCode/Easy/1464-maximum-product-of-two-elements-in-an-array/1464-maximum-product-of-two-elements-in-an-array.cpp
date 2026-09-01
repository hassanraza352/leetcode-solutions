class Solution {
public:
    int maxProduct(vector<int>& arr) {
        sort(arr.begin(), arr.end());
      int n = arr.size();
      int result = (arr[n - 1] - 1) * (arr[n - 2] - 1);
    return result;
    }
};