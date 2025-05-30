class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int i = 0, j = 1;  // Start j from 1 to ensure comparison
        int maxPro = 0;

        while (j < prices.size()) {
            if (prices[j] > prices[i]) {  
                maxPro = max(maxPro, prices[j] - prices[i]);
            } else {
                i = j;  // Move i to j when a lower price is found
            }
            j++;  // Always move j forward
        }
        return maxPro;
    }
};