class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int count=1;
        int maxcount=0;
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]== nums[i-1]){
                continue;
            }
            else if(i>0 && nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                maxcount=max(maxcount, count);
                count=1;
            }
        }
        maxcount=max(maxcount, count);
        return maxcount;
    }
};