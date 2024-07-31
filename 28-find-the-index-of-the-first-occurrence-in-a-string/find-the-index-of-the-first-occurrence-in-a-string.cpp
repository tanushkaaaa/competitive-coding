class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int answer;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==needle.size()){
                    answer=i-needle.size();
                    return answer;
                }
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        
        
        return -1;
    }
};