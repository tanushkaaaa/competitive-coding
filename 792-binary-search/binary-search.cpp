class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) {
            return i;
            break;
            }
            
        }
        return -1;
    }
};