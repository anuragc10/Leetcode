#include <cstring>
class Solution {
public:
    int titleToNumber(string str) {
        int ans=0;
        int c=0;
        
        for(int i=(str.length());i>0;i--){
            int a=(str[c]-'A'+1);
            ans=ans+pow(26,i-1)*a;
            c++;
        }
        return ans;
    }
};
