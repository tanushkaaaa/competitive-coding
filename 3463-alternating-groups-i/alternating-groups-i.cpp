class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int c=0;
         if((colors[n-1]!=colors[n-2]) && (colors[n-1]!=colors[0])) c++;
        if((colors[n-1]!=colors[0]) && (colors[0]!=colors[1])) c++;
        for(int i=1;i<n-1;i++){
        if( (colors[i]!=colors[i+1]) && (colors[i]!=colors[i-1])) c++;
        }
       
        return c;
    }
};