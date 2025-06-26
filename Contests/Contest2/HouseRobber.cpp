class Solution {
public:
    int func(int i , vector<int>& nums) {
        if (i >= nums.size()) return 0;

        int select = nums[i] + func(i + 2, nums);
        int skip = func(i + 1, nums);
        return max(select, skip);
    }

    int rob(vector<int>& nums) {
        return func(0 , nums);
    }
};