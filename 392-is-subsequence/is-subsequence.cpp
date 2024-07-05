class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int i=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]) {i++; 
            j++;}
            else j++;
        }
        return i==s.length();
    }
};