class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        	int start = 0;
	while (start < arr.size()) {
		int max1 = INT_MIN;
		for (int i = 0 ; i <=start ; i++) {
			if (max1 < arr[i]) {
				max1 = arr[i];
			}
		}

		
		int min = INT_MAX;
		for (int i = start ; i < arr.size(); i++) {
			if (min > arr[i]) {
				min = arr[i];
			}
		}

		if (max1 - min <= k) {
			return start;
			break;
		}
		start++;
	}
    return -1;
    }
};