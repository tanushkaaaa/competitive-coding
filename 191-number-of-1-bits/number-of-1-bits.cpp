class Solution {
public:
    int hammingWeight(int n) {
        string res="";
        while(n>0){
            res+=(n%2==0)?'0':'1';
            n/=2;
        }
        int c=0;
        for(int i=0;i<res.length();i++){
            if(res[i]=='1') c++;
        }
        return c;
    }
};