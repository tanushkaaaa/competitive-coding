class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        //very simple
        vector<vector<int>> direc{
                                {0,1}, //east
                                {1,0}, //south
                                {0,-1}, //west
                                {-1,0} //north
                                };
        vector<vector<int>> res;
        int steps=0;//how many steps
        int dir=0;//in dir direc
        res.push_back({rStart,cStart});
        while(res.size()<rows*cols){
            if(dir==0 || dir==2) steps++; //east or west
            for(int i=0;i<steps;i++){
                rStart+=direc[dir][0];//x
                cStart+=direc[dir][1];//y
                if(rStart>=0 && rStart<rows && cStart>=0 && cStart<cols){
                    res.push_back({rStart,cStart});
                } 
            }
            dir=(dir+1)%4;
        }
        return res;
    }
};