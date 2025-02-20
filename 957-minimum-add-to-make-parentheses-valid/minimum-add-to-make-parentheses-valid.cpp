class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char>st;
        // int c=0;
        // for(char ch:s){
        //     if(ch=='(') st.push(ch);
        //     else{
        //         if(st.empty()) c++;
        //         else st.pop();
        //     }
        // }
        // return c+st.size();

        int open=0,close=0;
        for(auto ch:s){
            if(ch=='(') open++;
            else{
                if(open>0) open--;
                else close++;
            }
        }
        return open+close;
    }
};