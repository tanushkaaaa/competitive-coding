class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() == c)
                st.pop();
            else
                st.push(c);
        }

        // Build the result from the stack
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // Stack gives characters in reverse order
        reverse(result.begin(), result.end());

        return result;
    }
};
