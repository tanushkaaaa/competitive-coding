class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res(nums1.size() , -1);
        unordered_map<int,int>map;
        stack<int>st;
        for(int num:nums2){
            while(!st.empty() && st.top()<num){
                map[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        for(int i=0;i<nums1.size();i++){
            if(map[nums1[i]]) res[i]=map[nums1[i]];
        }
        return res;
    }
};