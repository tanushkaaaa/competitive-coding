class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            string token=tokens[i];
            if(token.size()>1||isdigit(token[0])){
                st.push(stoi(token));
                continue;
            }
             int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();
            int result = 0;
            if (token == "+") {
                result = num1 + num2;
            } else if (token == "-") {
                result = num1 - num2;
            } else if (token == "*") {
                result = num1 * num2;
            } else {
                result = num1 / num2;
            }
            st.push(result);
        }
        
        return st.top();
    }
};