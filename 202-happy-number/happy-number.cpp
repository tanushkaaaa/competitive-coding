class Solution {
public:
    int digSq(int n) {
       int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
        return sum;
        }
    bool isHappy(int n){
        int slow,fast;
        slow=fast=n;
        do{
            slow=digSq(slow);
            fast=digSq(fast);
            fast=digSq(fast);
        }while(slow!=fast);
        if(slow==1) return true;
        else return false;
    }
};