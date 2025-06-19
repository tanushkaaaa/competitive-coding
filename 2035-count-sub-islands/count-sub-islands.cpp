class Solution {
public:
    bool checkSubIsl(vector<vector<int>>& grid1,vector<vector<int>>& grid2,int i,int j){
        if(i<0 || i>=grid1.size() || j<0 || j>=grid2[0].size()) return true;
        
        if(grid2[i][j]!=1) return true;
        grid2[i][j]=-1;

        bool res= (grid1[i][j]==1);

        res=res & checkSubIsl(grid1,grid2,i+1,j);
        res=res & checkSubIsl(grid1,grid2,i-1,j);
        res=res & checkSubIsl(grid1,grid2,i,j+1);
        res=res & checkSubIsl(grid1,grid2,i,j-1);

        return res;
        }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int c=0;
        int m=grid2.size();
        int n=grid2[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1 && checkSubIsl(grid1,grid2,i,j)){
                    c++;
                }
            }
        }
        return c;
    }
};