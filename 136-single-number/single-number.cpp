class Solution {
public:
//method-1 hashmap
//method 2 sorting
    // int singleNumber(vector<int>& nums) { 
    //    sort(nums.begin(),nums.end());
    //     for(int i=1;i<nums.size();i+=2)
    //     {
    //         if(nums[i]!=nums[i-1])
    //             return nums[i-1];
    //     }
    //     return nums[nums.size()-1];
//method3-bitwise
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