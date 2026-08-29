class Solution {
public:
    bool isPalindrome(int x) {
if (x < 0) {
	return false;
}
if (x == 0) {
		return true;
}
int original = x;
double temp = 0;
while (x > 0) {
	int n = x % 10;
	temp = temp * 10 + n;
	x /= 10;
}
if (temp == original) {
	return true;
}
return false;
    }
};