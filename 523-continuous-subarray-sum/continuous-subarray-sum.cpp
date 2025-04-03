class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        m[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remainder=sum%k;
            if(m.find(remainder)!=m.end()){
                    if(i-m[remainder]>=2) return true;
            }else m[remainder]=i;
        }
        return false;
    }
};