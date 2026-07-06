class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;

        int a=0;
        long long p =1;

        while(n>0){
            int ld=n%10;
            if(ld!=0){
                ans.push_back(ld*p);
            }

            p*=10;
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};