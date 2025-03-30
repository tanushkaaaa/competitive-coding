class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxA=0;
        while(i<j){
            int minL=min(height[i],height[j]);
            int area=minL*(j-i);
            maxA= max(maxA,area);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxA;
    }
};