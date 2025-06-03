class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //sort kr k krne ka TC is nlogn that is easy also
    //    sort(begin(nums),end(nums),greater<int>());
    //    return nums[k-1]; 

    //next approach is min heap iska tc is nlogk but in worst case nlogn toh similar hi hogya that is why this is not the best approach
    // priority_queue<int,vector<int>>pq; this is default max heap and we need minheap
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int num:nums){
            pq.push(num);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};