 bool isValid(int maxAllowed,int stu ,vector<int>&arr,int size) {
    int pages = 0;
    int count=1; 
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxAllowed) return false;
        if (arr[i] + pages <= maxAllowed) {
            pages += arr[i];
        }
        else {
            pages = arr[i];
            count++;

        }
    }
    if (count <= stu) {
        return true;
    }
    else {
        return false;
    }
}


class Solution {
public:
    int splitArray(vector<int>& arr, int k) {

    int start = 0;
    int end = 0;
    int ans = 0;
    int n =arr.size();
    for (int i = 0; i < n; i++) {
        end += arr[i];
   }
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isValid(mid, k, arr,n)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
   return ans;
     
    }
};