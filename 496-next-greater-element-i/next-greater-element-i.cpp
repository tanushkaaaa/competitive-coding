class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> output;
        unordered_map<int, int> hashMap;

        for (int num : nums1)
        {
            hashMap[num] = -1;
        }

        stack<int> st;

        for (int num : nums2)
        {
            while (!st.empty() && st.top() < num)
            {
                hashMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        for (int num : nums1)
        {
            output.push_back(hashMap[num]);
        }

        return output;
    }
};