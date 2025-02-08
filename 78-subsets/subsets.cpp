class Solution {
public:

    void solve(int i,vector<int>& nums, vector<int>&temp,vector<vector<int>>&res){
        // if(i==nums.size()) {
        //     res.push_back(temp);
        //     return;
        // }
        res.push_back(temp);
        for(int j=i;j<nums.size();j++){
        temp.push_back(nums[j]);
        solve(j+1,nums,temp,res);
        temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(0,nums,temp,res);
        return res;
    }
};