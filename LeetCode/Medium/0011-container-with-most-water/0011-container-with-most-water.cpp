class Solution {
public:
    int maxArea(vector<int>& arr) {
 int start = 0;
int end = size(arr)-1;
int result = 0;
//int height = 0;
int currentStore;
//int width;
while (start < end) {
	/*height = min(arr[start], arr[end]);
	width = end -start;*/
	currentStore = (min(arr[start], arr[end])) * (end - start);
	 	result = max(result, currentStore);
        
	if (arr[start] <= arr[end]) {
		start++;
	}
	else {
		end--;
	}



}
return result;
    }
};