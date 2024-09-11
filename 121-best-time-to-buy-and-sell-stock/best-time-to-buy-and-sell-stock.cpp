class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyP= prices[0];
        int pro=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buyP) buyP=prices[i];      
        pro=max(pro,prices[i]-buyP);
        }
        return pro;
    }
};