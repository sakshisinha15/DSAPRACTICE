class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        bool f=false;
        for(int j=mini;j<=maxi;j++){
            f=false;
            for(int i=0;i<n;i++){
                if(nums[i]==j){
                    f=true;
                    break;
                }
            }
            if(!f){
             result.push_back(j);
        }
        }
        return result;
    }
};