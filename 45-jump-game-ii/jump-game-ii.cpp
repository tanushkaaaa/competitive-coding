class Solution {
public:
    int jump(vector<int>& nums) {
        int near=0,far=0,jumps=0;
        while(far<nums.size()-1){
            int maxFar=0;
            for(int i=near;i<=far;i++){
                maxFar=max(maxFar,i+nums[i]);
            }
            near=far+1;
            far=maxFar;
            jumps++;
        }
        return jumps;
    }
};