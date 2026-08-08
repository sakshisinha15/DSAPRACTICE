class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int osum=0,esum=0,cnt=0;
        for(int i=1;cnt<n;i+=2){
                osum+=i;
                cnt++;
                if(cnt==n){
                    break;
                }
        }
        cnt=0;
        for(int i=2;cnt<n;i+=2){
                esum+=i;
                cnt++;
                if(cnt==n){
                    break;
                }
        }
        while(esum!=0){
            int temp=esum;
            esum=osum%esum;
            osum=temp;
        }
        return osum;
    }
};