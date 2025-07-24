class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> numsP;
        vector<int> numsN;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) numsP.push_back(nums[i]);
            else numsN.push_back(nums[i]);   
        }
        for(int i=0;i<numsP.size();i++){
            res.push_back(numsP[i]);
            res.push_back(numsN[i]);
        }
        return res;
    }
};