class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length()) return false;
       unordered_map<char,int> m;
       for(auto ch:s) {m[ch]++;}
       for(auto ch: t){
        if(m.find(ch)==m.end() || m[ch]==0) return false;
       m[ch]--;
        }
        return true;
    }
};