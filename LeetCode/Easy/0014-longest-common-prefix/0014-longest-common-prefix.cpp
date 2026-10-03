class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";
        int count = 0;

        while (count < strs[0].length()) {
            char ch = strs[0][count];

            for (int i = 1; i < strs.size(); i++) {

                if (count >= strs[i].length() ||
                    strs[i][count] != ch) {

                    return ans;
                }
            }

            ans += ch;

            count++;
        }

        return ans;
    }
};