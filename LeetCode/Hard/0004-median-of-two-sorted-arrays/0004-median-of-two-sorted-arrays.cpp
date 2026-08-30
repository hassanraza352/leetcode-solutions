class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int n1 = nums1.size();
int n2 = nums2.size();
double median;
vector <int> ans;
for (int value : nums1) {
	ans.push_back(value);
}
for (int value : nums2) {
	ans.push_back(value);
}

sort(ans.begin(), ans.end());
int idx = ans.size();
	 if (idx % 2 != 0) {
	median = ans[idx / 2];
	 }
	 if (idx % 2 == 0) {
		  median =ans[idx / 2]+ans[(idx / 2)-1];
		  median /= 2;
	 }


return median;
    }
};