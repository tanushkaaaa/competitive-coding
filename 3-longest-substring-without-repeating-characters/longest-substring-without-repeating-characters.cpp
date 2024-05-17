class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxL=0;
        int l=0;
        unordered_map<char,int> cnt;

        for(int r=0;r<s.length();r++){
            char c=s[r];
            cnt[c]=cnt[c]+1;

            while(cnt[c]>1){
                char leftChar= s[l];
                cnt[leftChar]= cnt[leftChar]-1;
                l++;
            }
            maxL=max(maxL,r-l+1);
        }
        return maxL;
    }
};