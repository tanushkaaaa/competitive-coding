class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.length();
        int f=0, b=n-1;
        while(f<=n/2){
            s[f]=min(s[f],s[b]);
            s[b]=s[f];
            b--;
            f++;
        }
        return s;
    }
};