class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]=='*') st.pop();
            else st.push(s[i]);
        }
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