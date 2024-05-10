class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size(), val=0;
        for(int i=0;i<n;i++){
            val+=pow(26,n-i-1)*(columnTitle[i]-'A'+1);
        }
        return val;
    }
};