// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         // hashing isy bhi better ha lkn wo bhi perhi ni ha jb wo ki to phr ussy krna  isko dobara
//  sort(nums.begin(), nums.end());

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i - 1]) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {

            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;
    }
};