class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res;
        
        int j=1;
        int n=arr.size();
        while(j<=n){
            int maxi=-1;
        for(int i=j;i<=arr.size()-1;i++){
            maxi=max(maxi,arr[i]);
        }
        res.push_back(maxi);
        j++;
        }
        return res;
    }
};