class Solution {
public:
    int countways(string s,int n){
        if(n==0 || n==1)
            return 1;
        if(s[0]=='0')
            return 0;
        int count=0;
        if(s[n-1]>'0')
            count=count+countways(s,n-1);
        if(s[n-2]=='1' ||(s[n-2]=='2' && s[n-1]<'7'))
            count=count+countways(s,n-2);
        
        return count;
    }
    int ways(string s,int n){
        if(n==0 || (n==1 && s[0]=='0'))
            return 0;
        return countways(s,n);
    }
    int numDecodings(string s) {
        int n=s.length();
        return ways(s,n);
    }
};
