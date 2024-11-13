class Solution {
public:
    int smallestNumber(int n, int t) {
        int k=n;
        
       while(k>=n){
        int pro=1;
        while(k>0){
            int rem=k%10;
            pro=pro*rem;
            k=k/10;
        }
            if(pro%t==0) 
            {return n;
            break;}
            else{       
                n++;
                k=n;
            } 
       } 
       return {};
    }
};