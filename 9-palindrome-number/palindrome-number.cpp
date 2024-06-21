class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long long x1=x;
        long long rev=0;
        while(x>0){
            rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        if(x1==rev) return true;
        else return false;
        
    }
};