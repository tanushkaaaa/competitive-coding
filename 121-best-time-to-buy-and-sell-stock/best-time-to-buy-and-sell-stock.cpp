class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int p=prices[0];
        int pro=0;
        for(int i=1;i<n;i++){
        if(prices[i]<p) p=prices[i];
        pro=max(pro,prices[i]-p);
        }
        return pro;
    }
};