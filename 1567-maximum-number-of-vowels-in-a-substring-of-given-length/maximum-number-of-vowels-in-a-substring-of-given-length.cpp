class Solution {
    bool isVowel(char ch){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') return true;
    return false;
    }
public:
    int maxVowels(string s, int k) {
        int l=0,r=0,maxi=0,c=0;
        while(r<s.size()){
             if(r-l==k){
                maxi=max(maxi,c);
                if(maxi==k) return c;
                
                if(isVowel(s[r])){
                    r++;
                    c++;
                }
                if(isVowel(s[l])){
                        //l++;
                        c--;
                }
               l++;
            }
            else{

             if(isVowel(s[r]))
                    c++;
                r++;
            }
            
        }
        maxi=max(maxi,c);
        return maxi;
    }
};