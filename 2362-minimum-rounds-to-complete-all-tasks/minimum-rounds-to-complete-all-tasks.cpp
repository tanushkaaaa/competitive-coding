class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        int c=0;
        for(auto& i:tasks){
            m[i]++;
        }
        for(auto& p:m){
            int r=p.second;
            if(p.second%3==0){
                c+=r/3;
            }else{
                c+=(r/3)+1;
            }
            if(p.second==1) return -1;
        }
        return c;
    }
};