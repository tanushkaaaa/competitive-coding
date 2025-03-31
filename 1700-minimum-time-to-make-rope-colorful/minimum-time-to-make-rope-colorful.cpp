class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        // int time=0;
        // int n=colors.length();
        // for(int i=1;i<n;i++){
        //         if(colors[i-1]==colors[i]){
        //             if(neededTime[i]>neededTime[i-1]) time+=neededTime[i-1];
        //             else time+=neededTime[i];
        //         }
        // }
        // return time;
        //this wont work ex in case of [3,5,10,7,5,3,5,5,4,8,1]



        //  int time = 0;
        // int maxTime = neededTime[0];  // Track the max time in the current group
        // int totalTime = neededTime[0];  // Sum of all times in the current group

        // for (int i = 1; i < colors.size(); i++) {
        //     if (colors[i] == colors[i - 1]) { 
        //         // Same color group
        //         totalTime += neededTime[i];
        //         maxTime = max(maxTime, neededTime[i]);
        //     } else {
        //         // Add the cost to remove all but the max balloon in the previous group
        //         time += (totalTime - maxTime);
        //         // Reset for the new group
        //         totalTime = neededTime[i];
        //         maxTime = neededTime[i];
        //     }
        // }

        // // Handle the last group
        // time += (totalTime - maxTime);
        // return time;
        //this will work but this is gadha majduri

        //this is smart soln
        int TotalTime=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
            TotalTime+=min(neededTime[i],neededTime[i-1]);
            neededTime[i]=max(neededTime[i],neededTime[i-1]);//-->Point**
            }
            
        }
        return TotalTime;
    }
};