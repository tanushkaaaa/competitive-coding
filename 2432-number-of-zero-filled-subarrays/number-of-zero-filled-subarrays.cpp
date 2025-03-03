class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0;
        long long res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
                res+=c;
            }
            else c=0;
        }
        return res;
    }
};