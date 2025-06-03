class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //sort kr k krne ka TC is nlogn that is easy also
       sort(begin(nums),end(nums),greater<int>());
       return nums[k-1]; 
        
    }
};