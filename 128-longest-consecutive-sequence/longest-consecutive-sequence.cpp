class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //cannot use sort
        sort(nums.begin(),nums.end());
        int c=0,mc=0;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            else if(i>0 && nums[i]==nums[i-1]+1) c++;
            else{ 
                mc=max(mc,c);
                c=1;
            }
        }
        mc=max(mc,c);
        return mc;
    }
};