class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        for(const auto& x:arr){
            m[x]++;
        }
        string ans="";
        int c=0;
        for(const auto& x:arr){
            if(m[x]==1){
                ans=x;
                c++;
            }
            if(c==k) return ans;
        }
        return "";
    }
};