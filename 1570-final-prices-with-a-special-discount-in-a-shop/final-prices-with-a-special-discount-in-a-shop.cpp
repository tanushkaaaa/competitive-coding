class Solution {
public:
    
        vector<int> finalPrices(vector<int>& prices) {
        stack<int> stack;
        for (int i = 0; i < prices.size(); i++) {
            while (!stack.empty() && prices[stack.top()] >= prices[i]) {
                int index = stack.top();
                stack.pop();
                prices[index] -= prices[i];
            }
            stack.push(i);
        }
        return prices;
    }
};