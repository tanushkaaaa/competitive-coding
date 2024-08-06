class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        for(const char x:text){
            if(x=='a'||x=='b'||x=='l'||x=='o'||x=='n') m[x]++;
        }
        return min({m['b'],m['a'],m['l']/2,m['o']/2,m['n']});
    }
};