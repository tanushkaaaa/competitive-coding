class Solution {
public:
    int count = 0;

    void backT(int idx, vector<int>& nums, int target, int currSum) {
        // Base case: Stop when index reaches the end
        if (idx == nums.size()) {
            if (currSum == target) count++;
            return;
        }

        // Ensure index does not go out of bounds
        if (idx >= nums.size()) return;  

        // Include '+' sign
        backT(idx + 1, nums, target, currSum + nums[idx]);

        // Include '-' sign
        backT(idx + 1, nums, target, currSum - nums[idx]);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        count = 0;  // Reset count for each function call
        backT(0, nums, target, 0);
        return count;
    }
};
