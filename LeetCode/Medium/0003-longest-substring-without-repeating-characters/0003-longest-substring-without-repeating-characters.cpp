class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        int right = 0;
        int maxLength = 0;

        unordered_set<char> set;

        while (right < s.length()) {

            if (set.find(s[right]) == set.end()) {

                set.insert(s[right]);
                right++;

                maxLength = max(maxLength, right - left);
            }
            else {
                set.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};