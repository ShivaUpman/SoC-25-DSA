class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int result = right;

        while (left<= right ){
            int mid = left +(right -left) /2;
            long long hours = 0;
            for (int pile : piles) {
                 hours += ((long long)pile + mid - 1) / mid;  
            }
            if (hours <= h ) {
                 result = mid ;
                 right = mid - 1;
            }
            else left = mid + 1;
        }

        return result ;
    }
};