class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxC=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) c++;
            if(nums[i]==0){
            maxC=max(c,maxC);
            c=0;
            }
        }
        maxC=max(c,maxC);
        return maxC;
    }
};