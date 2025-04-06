class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        
        for (int i = 0; i < a.size(); i++) {
            if (!st.empty()  && st.top() > 0 && a[i] < 0) {
                if (st.top() > abs(a[i])) continue;
                else if (st.top() < abs(a[i])) {
                    st.pop();
                    i--;
                } else {
                    st.pop();
                }
            } else {
                st.push(a[i]);
            }
        }

        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
