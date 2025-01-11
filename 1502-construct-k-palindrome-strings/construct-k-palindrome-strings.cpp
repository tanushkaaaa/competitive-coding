class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.length();
        if(n<k) return false;
        unordered_map<char,int> m;
        for(auto c : s) {m[c]++;}
        int oc=0;
        for(auto p : m){
            if(p.second % 2 !=0) oc++;
        }
        return oc<=k;
    }
};