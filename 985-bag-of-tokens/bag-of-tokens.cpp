class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int s=0,maxS=0;
        while(i<=j){
            if(tokens[i]<=power){
                s++;
                power-=tokens[i];
                i++;
                maxS=max(s,maxS);
            }
            else if(s>=1){
                power+=tokens[j];
                s--;
                j--;
            }
            else return maxS;
        }
        return maxS;
    }
};