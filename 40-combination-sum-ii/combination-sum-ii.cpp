class Solution {
public:
    
   void backT(int idx,vector<int>& candidates,vector<int> &temp,int target,vector<vector<int>> &res){
            if(target<0) return;
            if(target==0){
                res.push_back(temp);
                return;
            }
            for(int i=idx;i<candidates.size();i++){
                if(i>idx && candidates[i]==candidates[i-1]) continue;
            
            temp.push_back(candidates[i]);
            backT(i+1,candidates,temp,target-candidates[i],res);
            temp.pop_back();
            }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        sort(begin(candidates),end(candidates));
        backT(0,candidates,temp,target,res);
        return res;
    }
};