class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        set<int> st;
        vector<int> result;
        for(int i=1;i<=n+1;i++){
            result.push_back(k*i);
        }
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<result.size();i++){
        if(st.find(result[i])==st.end()){
            return result[i];
        }
        }
        return 0;
    }
};