class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       // kadaans algorithm
      // Har index par mujhe decide karna hai ke previous subarray ko continue karun ya yahan se naya //subarray start karun.
 int current = 0;
 int maximum = INT_MIN;
 for (int i = 0; i < nums.size(); i++) {
     current += nums[i];
     maximum = max(current, maximum);
     if (current < 0) {
         current = 0;
     }

 }
return maximum;
    }
};