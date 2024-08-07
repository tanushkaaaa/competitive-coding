class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        vector<string>words;
        string temp;

        for(char ch:s){
            if(ch==' '){
                if(!temp.empty()){
                    words.push_back(temp);
                    temp.clear();
                } 
            }
            else{
                temp+=ch;
            }
        }
        if(!temp.empty()){
            words.push_back(temp);
        }
        if(pattern.size()!=words.size()) return false;
        for(int i=0;i<pattern.size();i++){
            char c1=pattern[i];
            string s1=words[i];
            
            if((m1.find(c1)!=m1.end() && m1[c1]!=s1) ||(m2.find(s1)!=m2.end() && m2[s1]!=c1) ) return false;
            m1[c1]=s1;
            m2[s1]=c1;
        }
        return true;
    }
};