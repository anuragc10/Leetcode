class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int n, int m)
    {
        //same as LCS just return m+n-t[n][m]
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                else if(X[i-1]==Y[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else{
                    t[i][j]=max(t[i-1][j] , t[i][j-1]);
                }
            }
        }
        return ((m+n) -(t[n][m]));
    }
};
