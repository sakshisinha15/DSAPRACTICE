class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> left;
        vector<int> right;
        vector<int> answer;
        int lsum=0,rsum=0;
        left.push_back(lsum);
        right.push_back(rsum);
        for(int i=0;i<n-1;i++){
            lsum+=nums[i];
            left.push_back(lsum);
        }
        for(int i=n-1;i>0;i--){
            rsum+=nums[i];
            right.push_back(rsum);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<n;i++){
            answer.push_back(abs(left[i]-right[i]));
        }
        return answer;
    }
};