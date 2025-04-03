class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //main approach is to consider 0 as -1
      int n=nums.size();
      unordered_map<int,int> mp;
      int currSum=0;
      mp[0]=-1;
      int maxLen=0;
        for(int i=0;i<n;i++){
            currSum +=(nums[i]==1)?1:-1;
            if(mp.find(currSum)!=mp.end()){
                int len=i-mp[currSum];
                maxLen=max(maxLen,len);
            }
            else mp[currSum]=i;
        }
        return maxLen;
    }
};