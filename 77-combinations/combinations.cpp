class Solution {
public:
        vector<vector<int>> res;
        void backTrack(int start, int &n, int k, vector<int>& temp){
            if(k==0) {
                res.push_back(temp);
            return;
            }
            for(int i=start;i<=n;i++){
                temp.push_back(i);
                backTrack(i+1,n,k-1,temp);
                temp.pop_back();
            }
        }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        backTrack(1,n,k,temp);
        return res;
    }
};