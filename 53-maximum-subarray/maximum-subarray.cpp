class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum=max(nums[i],nums[i]+sum);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};