class Solution {
public:
    int maxDepth(string s) {
        int op=0;
        int opm=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') op++;
            opm=max(opm,op);
            if(s[i]==')') op--;
        }
        return opm;
    }
};