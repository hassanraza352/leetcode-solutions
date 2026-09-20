  bool valid(int speed, vector<int>& piles, int h) {

        double hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            hours += (piles[i] + speed - 1) / speed;
        }

        return hours <= h;
    }

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = 0;

for (int i = 0; i < piles.size(); i++) {
    end = max(end, piles[i]);
}

        int ans = end;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (valid(mid, piles, h)) {
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