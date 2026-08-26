class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        vector<string> result;

        for (int i = 0; i < s.length(); i++) {

            for (int j = i; j < s.length(); j++) {

                string temp = "";
                int count = 0;

                for (int x = i; x <= j; x++) {

                    temp += s[x];

                    if (s[x] == '1') {
                        count++;
                    }
                }
                if(count>k){
                    break;
                }
                if (count == k) {
                    result.push_back(temp);
                }
            }
        }

        if (result.empty()) {
            return "";
        }

        string ans = result[0];

        for (int i = 1; i < result.size(); i++) {

            if (result[i].length() < ans.length()) {
                ans = result[i];
            }
            else if (result[i].length() == ans.length() &&
                     result[i] < ans) {
                ans = result[i];
            }
        }

        return ans;
    }
};