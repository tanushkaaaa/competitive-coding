class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        int s=0,e=0,c=0,len=0;
        while(e<fruits.size()){
            int a =fruits[e];
            m[a]++;
            if(m[a]==1) c++;
            e++;

            while(c>2){
                m[fruits[s]]--;
                if(m[fruits[s]]==0) c--;
                s++;
            }
            len=max(len,e-s);
        }
        return len;
    }
};