class Solution {
public:
    vector<vector<int>> res;

    void backT(int start, vector<int>& temp, int k, int n) {
        if (temp.size() == k && n == 0) {
            res.push_back(temp);
            return;
        }
        for (int i = start; i <= 9; i++) {
            if (n - i < 0) break;
            temp.push_back(i);
            backT(i + 1, temp, k, n - i);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        res.clear();
        vector<int> temp;
        backT(1, temp, k, n);
        return res;
    }
};
