class Solution {
public:
    int singleNumber(vector<int>& nums) {
         if(nums.size()==1)
        {
            return nums[0];
        }
        int ans=0;
        for(auto num: nums){
        //for(int i=0;i<nums.size();i++){
            ans=ans^num;
        }
        return ans;

        
    }
};