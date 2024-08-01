class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(auto &i:details){
        int sum=stoi(i.substr(11,2));
        c+=sum>60;
        }
        return c;
    }
};