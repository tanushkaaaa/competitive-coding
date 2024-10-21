class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxL=0,L=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){  L++;
        maxL=max(maxL,L);
            }
        else L=0;
        }
        return maxL;
    }
};