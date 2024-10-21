class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> c(26);
        int i=0,j=0,res=0,maxc=0;
        while(j<s.size()){
            c[s[j]-'A']++;
            maxc=max(maxc,c[s[j]-'A']);
            if(j-i+1-maxc>k) {
                c[s[i]-'A']--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};