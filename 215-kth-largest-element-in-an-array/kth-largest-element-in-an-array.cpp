class Solution {
public:
 
    int findKthLargest(vector<int>& nums, int k) {
//App-1 sort kr k krne ka TC is nlogn that is easy also
        //sort(begin(nums),end(nums),greater<int>());
        //return nums[k-1]; 

//App-2 next approach is min heap iska tc is nlogk but in worst case nlogn toh similar hi hogya that is why this is not the best approach
    // priority_queue<int,vector<int>>pq; this is default max heap and we need minheap
        // priority_queue<int,vector<int>,greater<int>>pq;
        // for(int num:nums){
        //     pq.push(num);
        //     if(pq.size()>k) pq.pop();
        // }
        // return pq.top();

//App-3 quickselect(hoarse algo(partion algo))(kind of quick sort kia h..sorting mana kia h toh partial quicksort type krna h)
            int n=nums.size();
            int l=0,r=n-1;
            int pivot=0;
            while(true){
                pivot=parti_algo(nums,l,r);
                if(pivot==k-1) break;
                else if(pivot>k-1) r=pivot-1;
                else l=pivot+1;
            }
        return nums[pivot];
    }
   int parti_algo(vector<int>& nums, int l,int r){
         int p = nums[r]; // pick rightmost element as pivot
        int i = l;
        for (int j = l; j < r; j++) {
            if (nums[j] > p) { // > for kth largest
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[r]); // place pivot at correct position
        return i;
    }
};