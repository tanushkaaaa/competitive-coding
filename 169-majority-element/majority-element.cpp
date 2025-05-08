class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n=nums.size();
    //    sort(nums.begin(),nums.end());
    //    return nums[n/2];
    //but soting takes tc O(n logn)

    // unordered_map<int,int>m;
    // for(int i:nums){
    //     m[i]++;
    // }
    // for(auto p:m){
    //     if(p.second>n/2) return p.first;
    // }
    // return 0;
    //but map takes sc O(n)

    //moores vooting algo(striver ki yt se dekhna then solve ME2 also)
    int c=0;
    int el;
    for(int i=0;i<n;i++){
        if(c==0){
            c=1;
            el=nums[i];
        }
        else if(nums[i]==el) c++;
        else c--;
    }
    return el;
    }
};