class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=1;
        vector<int> result;
        for(int i=digits.size()-1;i>=0;i--){
            sum+=digits[i];
            result.push_back(sum%10);
            int carry=sum/10;
            sum=carry;
        }
        if(sum != 0) {
            result.push_back(sum);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};