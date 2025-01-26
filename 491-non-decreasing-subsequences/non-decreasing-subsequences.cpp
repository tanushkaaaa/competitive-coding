class Solution {
public:
    int n;
    void backTrack(vector<int>& nums, int idx, vector<int>& curr,vector<vector<int>> &res){
        if(curr.size()>=2) res.push_back(curr);
        unordered_set<int> st;
        for(int i=idx;i<n;i++){
            if((curr.empty() || nums[i]>=curr.back())&& (st.find(nums[i])==st.end())){
            curr.push_back(nums[i]);
            backTrack(nums,i+1,curr,res);
            curr.pop_back();
            st.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        n=nums.size();
        vector<int> curr;
        vector<vector<int>> res;
        backTrack(nums, 0, curr,res);
        return res;
    }
};