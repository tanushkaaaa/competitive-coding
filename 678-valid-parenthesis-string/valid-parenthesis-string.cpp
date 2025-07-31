class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for (char c : s) {
            if (c == '(') {
                low++; high++;
            } else if (c == ')') {
                low--; high--;
            } else { // '*'
                low--; high++;  // * could be '(', ')' or ''
            }

            if (high < 0) return false; // Too many ')'
            if (low < 0) low = 0;       // Clamp to 0; can't go negative
        }

        return low == 0;
    }
};
