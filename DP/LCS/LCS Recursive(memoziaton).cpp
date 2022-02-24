class Solution{
    public:
    int t[1001][1001];
    int LCS(string S1, string S2, int n, int m)
    {
        if(n==0 || m==0)
        {
            return 0;
        }
        if(t[n-1][m-1]!=-1)
        {
            return t[n-1][m-1];
        }
        if(S1[n-1]==S2[m-1])
        {
            return t[n-1][m-1]= 1+LCS(S1,S2,n-1,m-1);
        }
        else{
            return t[n-1][m-1]=max(LCS(S1,S2,n,m-1) , LCS(S1,S2,n-1,m));
        }
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        memset(t,-1,sizeof(t));
        return LCS(S1,S2,n,m);
    }
};
