class Solution {
public:

    void permutation(string &s,int i,int n,vector<string> &res){
        if(i==n) {
            res.push_back(s);
            return;
        }
         permutation(s, i + 1, n,res);
        if (isalpha(s[i])) {
            // toggle case
            s[i] ^= (1 << 5);
            permutation(s, i + 1,n, res);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string>res;
        permutation(s,0,s.length(),res);
        return res;
    }
};