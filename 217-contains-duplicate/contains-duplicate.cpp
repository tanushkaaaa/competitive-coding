class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto& i:nums) m[i]++;
        for(auto& p:m) {
            if(p.second>1) return true;
           // break;
        } 
        return false;
    }
};