class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
   //sets khudi duplicatee handle kr leta ha to 
        unordered_set<int> set1;
        unordered_set<int> ansSet;

        for (int i = 0; i < nums1.size(); i++) {
            set1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (set1.find(nums2[i]) != set1.end()) {
                ansSet.insert(nums2[i]);
            }
        }

        vector<int> ans;

        for (int value : ansSet) {
            ans.push_back(value);
        }

        return ans;
    }
};