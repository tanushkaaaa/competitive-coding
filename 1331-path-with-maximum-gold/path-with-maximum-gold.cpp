class Solution {
public:
        int m,n;
        vector<vector<int>> direc{{-1,0},{1,0},{0,-1},{0,1}};
        int DFS(vector<vector<int>>& grid,int i,int j){
            if(i<0||i>=m||j<0||j>=n||grid[i][j]==0) return 0;

            int oriGoldVal = grid[i][j];
            grid[i][j]=0;

            int maxGold=0;
            for(auto &dir: direc){
                int new_i=i+dir[0];
                int new_j=j+dir[1];

                maxGold=max(maxGold,DFS(grid,new_i,new_j));
            }
            grid[i][j]=oriGoldVal;
            return oriGoldVal+maxGold;

        }
    int getMaximumGold(vector<vector<int>>& grid) {
             m=grid.size();
            n=grid[0].size();

            int maxGold=0;

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]!=0){
                        maxGold=max(maxGold,DFS(grid,i,j));
                    }
                }
            }
            return maxGold;
    }
};