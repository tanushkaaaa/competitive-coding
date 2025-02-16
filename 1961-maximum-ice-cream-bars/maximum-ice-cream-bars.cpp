class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs),end(costs));
        int c=0;
        for(int i=0;i<costs.size();i++){
        if(coins>=costs[i]){
            coins-=costs[i];
            c++;
        }
        }
        return c;
    }
};