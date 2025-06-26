class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int low = 0;
        int high = 0;
        int number = 0;

        while (low <= high && high<=nums.size()-1){
            if (nums[high] == 1) number = max(high-low+1 , number);
            else low = high+1 ; high = high+1;
        }
        return number;
    }
};