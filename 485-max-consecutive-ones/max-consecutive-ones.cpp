class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxC=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {c++;
            maxC=max(c,maxC);}
            else{
            c=0;
            }
        }
        return maxC;
    }
};