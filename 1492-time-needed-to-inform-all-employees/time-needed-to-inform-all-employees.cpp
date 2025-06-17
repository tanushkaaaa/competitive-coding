class Solution {
public:
    int maxTime=0;
    void dfs(unordered_map<int,vector<int>> &adj,vector<int>& informTime, int curr_emp,int curr_time){
        maxTime=max(maxTime,curr_time);
        for(int &emp:adj[curr_emp]){
            dfs(adj,informTime,emp,curr_time+informTime[curr_emp]);
        }
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<manager.size();i++){
            int employee_i=i;
            int manager_i = manager[i];
            if(manager_i !=-1) adj[manager_i].push_back(employee_i);
        }
        dfs(adj,informTime,headID,0);
        return maxTime;
    }
};