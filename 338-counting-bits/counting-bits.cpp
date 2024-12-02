class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i=0;i<=n;i++){
            string res="";
            int k=i;
                while(k>0){
                    res+=(k%2==0)?0:1;
                    k=k/2;
                }
                int c=0;
                for(int j=0;j<res.length();j++){
                        if(res[j]==1) c++;
                }
                arr.push_back(c);
        }
        return arr;
    }
};