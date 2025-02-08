class Solution {
public:
    void solve(int i,vector<int>& nums,vector<int>&temp,vector<vector<int>>&res){
        res.push_back(temp);
        // if(i==nums.size()){
        //     res.push_back(temp);
        //     return;
        // }
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]) continue;
            temp.push_back(nums[j]);
            solve(j+1,nums,temp,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<int>temp;
        vector<vector<int>>res;
        solve(0,nums,temp,res);
        return res;
    }
};