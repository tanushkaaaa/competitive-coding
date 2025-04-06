class Solution {
public:
    string removeStars(string s) {
        // stack<char>st;
        // for(int i=0;i<s.length();i++){
        //     if(!st.empty() && s[i]=='*') st.pop();
        //     else st.push(s[i]);
        // }
        // string result;
        // while (!st.empty()) {
        //     result += st.top();
        //     st.pop();
        // }

        // // Stack gives characters in reverse order
        // reverse(result.begin(), result.end());

        // return result;
        //ye sab stack se krne ka tarika h but direct vector use kr skte chota krne k liye 
         string c="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                c.pop_back();
            }else{
                c+=s[i];
            }
            
        }
        return c;
    }
};