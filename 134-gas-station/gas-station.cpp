class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //kadanes algo types
        //agar mera tc>0 then circuit complete karna possible hai
        int tc=0;
        int c=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            tc+=gas[i]-cost[i];
            c+=gas[i]-cost[i];
            if(c<0){
                c=0;
                start=i+1;
            }
        }
        return (tc<0)?-1:start;
    }
};