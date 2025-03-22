class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0,i=0,j=0;
       while(j<nums.size()-1){
        int maxF=0;
        for(int i=0;i<=j;i++){
            maxF=max(maxF,i+nums[i]);
        }
        i=j+1;
        j=maxF;
        jumps++;
       }
       return jumps;
    }
};