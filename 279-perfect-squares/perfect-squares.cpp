class Solution {
public:
        vector<int> arr;
    int helper(int n){
        if(n==0) return 0;
        if(arr[n]!=-1) return arr[n];
        int minc=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int res=1+helper(n-(i*i));
            minc=min(minc,res);
        }
            return arr[n] = minc;
    }
    int numSquares(int n) {
        arr = vector<int>(n + 1, -1);
       return helper(n);
    }
};