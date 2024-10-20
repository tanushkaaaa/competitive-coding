class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
    
    for (int i = 0; i < nums.size(); ++i) {
        // If we find the current element in the set, we have a duplicate
        if (window.find(nums[i]) != window.end()) {
            return true;
        }
        
        // Add current element to the set
        window.insert(nums[i]);
        
        // If window size exceeds k, remove the oldest element
        if (window.size() > k) {
            window.erase(nums[i - k]);
        }
    }
    
    return false;
    }
};