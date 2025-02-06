class Solution {
public:
    vector<vector<int>>res;
    void backTrack(int i,vector<int>& candidates, vector<int>& temp, int target){
        if(target==0) {
            res.push_back(temp);
            return;}
            if(target<0) return;
            if(i==candidates.size()) return;
            backTrack(i+1,candidates,temp,target);
            temp.push_back(candidates[i]);
            backTrack(i,candidates,temp,target-candidates[i]);
            temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         res.clear();
        vector<int>temp;
        backTrack(0,candidates,temp,target);
        return res;
    }
};