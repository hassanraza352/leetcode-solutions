class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
    int n = arr.size();

    vector<int> leftMax(n);
    vector<int> rightMin(n);


    leftMax[0] = arr[0];

    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }

    rightMin[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i + 1], arr[i]);
    }

    int ans = -1;

    for (int i = 0; i < n; i++) {

        if (leftMax[i] - rightMin[i] <= k) {
            ans = i;
            break;
        }
    }

   return ans;

    }
};