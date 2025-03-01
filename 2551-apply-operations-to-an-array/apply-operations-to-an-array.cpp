class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i+1<n;i++){
        if(nums[i]==nums[i+1]){
            nums[i]=2*nums[i];
            nums[i+1]=0;
        }
       } 
       int i = 0;
        for(auto n: nums){  // collect all noon zero values at front
            if(n != 0) nums[i++] = n;
        }
        while(i < nums.size()) nums[i++] = 0;         //set values to zero for remainintg ith element
        
        return nums;
    }
};