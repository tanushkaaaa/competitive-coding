class Solution {
public:
    int m,n;
    int res;
    int nonObs;
    vector<vector<int>>directions {{1,0},{-1,0},{0,-1},{0,1}};
    void backTrack(vector<vector<int>>& grid,int c,int i,int j){
        if(i<0||j<0||i>=m||j>=n || grid[i][j]==-1) return;
        if(grid[i][j]==2){
                if(c==nonObs) res++;
            return;
        }
        grid[i][j]=-1;
        for(auto &dir:directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];
            backTrack(grid,c+1,new_i,new_j);
        }
        grid[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
            m=grid.size();
            n=grid[0].size();
            res=0;
            nonObs=0;
            int start_x=0, start_y=0;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++){
                    if(grid[i][j]==0) nonObs++;
                    if(grid[i][j]==1) {
                        start_x=i;
                        start_y=j;
                    }
                }
            }
            nonObs++;
            int c=0;
            backTrack(grid,c,start_x,start_y);
            return res;
    }
};