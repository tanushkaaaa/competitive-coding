class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(begin(people),end(people));
        int i=0,j=n-1;
        int c=0;
        while(i<=j){
         if(people[j]+people[i]<=limit){
                    i++;
                    j--;
                    c++;
         }else{
            j--;
            c++;
         }
        }
        return c;
    }
};