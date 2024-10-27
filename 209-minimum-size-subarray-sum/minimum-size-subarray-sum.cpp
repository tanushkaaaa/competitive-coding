class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int c=0;
        int mini=INT_MAX;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                mini=min(mini,r-l+1);
                sum-=nums[l];
                l++;
            }
             r++;
        }
        if(mini==INT_MAX) return 0;

        return mini;
    }
};