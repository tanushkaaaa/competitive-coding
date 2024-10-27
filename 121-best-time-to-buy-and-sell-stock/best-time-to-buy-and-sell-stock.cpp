class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int l=0,r=0,pro=0;
        while(r<n){
            if(prices[r]>prices[l]){
                  pro=max(pro,prices[r]-prices[l]);
            }
                  else
                l = r;
            ++r;
        
        }
        return pro;
    }
};