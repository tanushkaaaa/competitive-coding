class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int>m;
        for(auto n: gifts) m.push(n);
        while(k--){m.push(sqrt(m.top()));
        m.pop();}
        while(m.size()>0){ans+=m.top(); m.pop();}
        return ans;
    }
};