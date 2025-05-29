class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        if(m.count(comp)==1) return{i,m[comp]};
        m[nums[i]]=i;
    }
        return {}; 
    
      //we used hashmap kyuki sc bhadra pr tc kam h, niche m while bhi lagana hoga toh tc bhad jayga
    // int i=0;
    // for(int j=i+1;j<nums.size();j++){
    //     int k=nums[i];
    //     if(target-nums[j]==k){
    //         return {i,j};
    //     }
    //     else i++;
    // }
    // return {};
    }
};