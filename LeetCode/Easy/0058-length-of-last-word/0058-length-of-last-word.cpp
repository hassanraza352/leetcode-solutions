class Solution {
public:
    int lengthOfLastWord(string s) {
	reverse(s.begin(), s.end());
	string ans;
	for (int i = 0; i < s.length(); i++) {
		if (ans.length() > 0) {
			break;
		}
		while (s[i] != ' ' && i < s.length()) {
			
			ans += s[i];
			i++;
		}
	}
return ans.length();
    }
};