class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int> m;
        for(int i:banned){
                m[i]++;
        }
        int sum=0,c=0;
        for(int i=1;i<=n;i++){
            if(!m[i]){
                sum+=i;
                if(sum<=maxSum){
                    c++;
                }else {
                    return c;
                }
            }
        }
        return c;
    }
};