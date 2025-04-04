class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int n=nums.size();
        double avg;
        double maxAvg=0;
       for(int i=0;i<k;i++){
             sum+=nums[i];
            maxAvg=sum/k;
       }
       for(int j=k;j<n;j++){
            sum=sum+nums[j]-nums[j-k];
            avg=sum/k;
            maxAvg=max(maxAvg,avg);
       }
       return maxAvg;
    }
};