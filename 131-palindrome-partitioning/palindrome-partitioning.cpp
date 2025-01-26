class Solution {
public:
    int n;
    bool isPalin(string s,int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void backTrack(string &s,int idx,vector<string> &curr,vector<vector<string>> &res){
        if(idx==n) {res.push_back(curr);
        return;}
            for(int i=idx;i<n;i++){
                if(isPalin(s,idx,i)) {
                    curr.push_back(s.substr(idx,i-idx+1));
                    backTrack(s,i+1,curr,res);
                    curr.pop_back();
            }
    }
    }
    vector<vector<string>> partition(string s) {
        n=s.length();
        vector<string>curr;
        vector<vector<string>> res;
        backTrack(s,0,curr,res);
        return res;
    }
};