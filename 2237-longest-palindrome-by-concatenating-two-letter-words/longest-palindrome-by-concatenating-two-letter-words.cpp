class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>m;
        for(auto &word: words){
            m[word]++;
        }
        bool centreUsed=false;
        int res=0;
        for(string &word : words){
            string rev=word;
            reverse(begin(rev),end(rev));

            if(rev!=word){
                if(m[word]>0&&m[rev]>0){
                    m[word]--;
                    m[rev]--;
                    res+=4;
                }
            }else{
                    if(m[word]>=2){
                        m[word]-=2;
                        res+=4;
                    }else if(m[word]==1 && centreUsed==false){
                        m[word]--;
                        res+=2;
                        centreUsed=true;
                    }
            }
        }
        return res;
    }
};