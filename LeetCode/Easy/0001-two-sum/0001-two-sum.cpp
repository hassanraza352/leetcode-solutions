class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int, int> m;
vector <int> result;
for (int i = 0;i<nums.size();i++) {
	int first = nums[i];
	int second = target - first;
	if(m.find(second)!= m.end()) {
		result.push_back(m[second]);
		result.push_back(i);
		break;
	}
	m[first] = i;
}
return result;
}
};