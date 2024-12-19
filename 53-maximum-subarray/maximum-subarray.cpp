class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int max_so_far = INT_MIN; // Overall maximum sum
        int n=arr.size();
    int max_ending_here = 0;  // Maximum sum for the current subarray

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        max_so_far = max(max_so_far, max_ending_here);

        if (max_ending_here < 0)
            max_ending_here = 0; // Reset if negative
    }
    return max_so_far;
    }
};