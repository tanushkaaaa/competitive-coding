class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sB=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sB++;
        
        else if(sB>0){
            int t=nums[i];
            nums[i]=0;
            nums[i-sB]=t;
        }
        }
    }
};