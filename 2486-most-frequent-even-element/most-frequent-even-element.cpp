class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        int ans=-1, mx=-1;
        for(auto m:mp){
            if(m.first%2==0 && m.second>mx){
                mx=m.second;
                ans=m.first;
            }
        }
        return ans;
    }
};