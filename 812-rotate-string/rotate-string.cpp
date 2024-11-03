class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string conc=goal+goal;
        int i=0;
        int j=0;
        int n=s.size();
        int m=conc.size();
                while(i<m){
                    if(s[j]==conc[i]){
                        i++;
                        j++;
                        if(j==n) {return true;}
                    }
                    else{
                        if(j!=0) {
                            i=i-j+1;
                             j=0;
                        }
                    else {
                        i++;
                        }
                }
                }
                
        return false;
    }
};