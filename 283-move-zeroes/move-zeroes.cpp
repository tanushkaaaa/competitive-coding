class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
      int i=0,j=0;
      while(j<n){
        if(nums[i]==0 && nums[j]!=0) {swap(nums[i],nums[j]);}
        else if(nums[i]==0 && nums[j]==0){j++;}
        else{ i++; j++;}
      }
    }
};