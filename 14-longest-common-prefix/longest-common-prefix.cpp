class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string ans="";
        int n=s.size();
        string a=s[0];
        string b=s[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]) ans+=a[i];
            else break;
        }
        return ans;
    }
};