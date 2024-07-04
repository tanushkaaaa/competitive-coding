class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), high = arr[n-1], temp;
        for (int i = n - 2; i >= 0; i--){
            temp = arr[i];
            arr[i] = high;
            high = max(high, temp);
        }
        arr[n-1] = -1;
        return arr;
    }
};