class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
       int s=0;
       int l=n-1;
       while(s<=l){
       int mid=(s+l)/2;
       
        if(target==nums[mid]) {return mid;
        break;}
        else if(target>nums[mid]) {
            s=mid+1;
        }
        else l=mid-1;
       }
       return -1;
    }
};