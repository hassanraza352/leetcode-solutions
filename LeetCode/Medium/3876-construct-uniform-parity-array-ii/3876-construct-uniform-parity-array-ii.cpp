class Solution {
public:

bool isPossible(vector<int>& nums) {
    int smallest = INT_MAX;
// smallest element nikal lia ok 
    for (int i = 0; i < nums.size(); i++) {
        smallest = min(smallest, nums[i]);
    } 
    // agr to smallest even or koi or element odd agya to even-odd  kr k bhi odd hi 
    //aye ga iska mtlb parity poory arry ki same ni hoskty ha ok na  
    // lkn agr parity smallest ki odd ha iska mtlb ap har aik ko koi na koi dono 
    // conditions mei aik laga kr parity odd krr hi skty ho poory array ki
    // so ye approach yad rakhni h a
    if (smallest % 2 == 0) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                return false;
            }
        }
    }

    return true;
}
    bool uniformArray(vector<int>& nums1) {
        return  isPossible( nums1);
    }
};