class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(begin(tokens),end(tokens));
        int i=0,j=n-1;
        int score=0;
        int maxScore=0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
                maxScore=max(score,maxScore);
            }else if(score>0){
                power+=tokens[j];
                score--;
                j--;
            }else return maxScore;
        }
        return maxScore;
    }
};