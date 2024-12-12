class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int ans=0;
        priority_queue<int>p;
        for(auto n:piles) p.push(n);
        while(k--){ 
            int x=p.top();
            p.pop();
            x-=x/2;
            p.push(x);
        }
        while(p.size()>0){ ans+=p.top(); p.pop();}
        return ans;
    }
};