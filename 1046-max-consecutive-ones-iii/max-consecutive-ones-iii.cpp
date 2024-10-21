class Solution {
public:
    int longestOnes(vector<int>& nums, int K) {
       int l=0,r=0,maxL=0,numZ=0;
       for(r=0;r<nums.size();r++){
        if(nums[r]==0) numZ++;

        if(numZ>K){
            if(nums[l]==0) numZ--;
        l++;
        }
        maxL=max(maxL,r-l+1);
       }
       return maxL;
    }
};
