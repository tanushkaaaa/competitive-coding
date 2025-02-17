class Solution {
public:
    int partitionString(string s) {
        vector<int>lastS(26,-1);
        int n=s.length();
        int c=0;
        int curr=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(lastS[ch-'a']>=curr){
                c++;
                curr=i;
            }
            lastS[ch-'a']=i;
        }
         return c+1;
    }
};