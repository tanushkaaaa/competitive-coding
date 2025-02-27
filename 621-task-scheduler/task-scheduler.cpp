class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>m;
        int c=0;
        for(auto i:tasks){
            m[i]++;
            c=max(c,m[i]);
        }
        int ans=(c-1)*(n+1);
        for(auto p:m){
            if(p.second==c) ans++;
        }
        return max((int)tasks.size(),ans);
    }
};