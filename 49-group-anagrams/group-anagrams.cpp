class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
      for(auto x:strs){
        string word=x;
        sort(word.begin(), word.end());
        m[word].push_back(x);
      }
      vector<vector<string>> ans;
      for(auto i: m){
        ans.push_back(i.second);
      }
      return ans;
    }
};