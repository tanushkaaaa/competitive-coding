class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
       for(int i=0;i<k;i++){
        sum=sum+nums[i];
       }
       double maxavg=sum/k;
       for(int i=k;i<nums.size();i++){
        sum=sum+nums[i]-nums[i-k];
        maxavg=max(maxavg,sum/k);
       }
       return maxavg;
    }
};