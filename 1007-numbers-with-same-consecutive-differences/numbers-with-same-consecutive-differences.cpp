class Solution {
public:
    int digit(int x){
        int c=0;
        while(x){
            c++;
            x=x/10;
        }
        return c;
    }
    void solve(int curr,int n,int k,vector<int>&res){
            if(digit(curr)==n){
                res.push_back(curr);
                return;
            }
            for(int i=0;i<10;i++){
                int last=curr%10;
                if(abs(last-i)==k){
                    solve((curr*10+i),n,k,res);
                }
            }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>res;
        for(int i=1;i<10;i++){
            solve(i,n,k,res);
        }
        return res;
    }
};