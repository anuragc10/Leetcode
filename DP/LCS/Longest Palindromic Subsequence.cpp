class Solution{
  //make second string reverse of first and then find lcs
  public:
    int longestPalinSubseq(string A) {
        vector<char> a,b;
        for(int i=0;i<A.length();i++)
        {
            a.push_back(A[i]);
            b.push_back(A[i]);
        }
        reverse(b.begin(),b.end());
        
        //LCS
        int n=a.size();
        int t[n+1][n+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                else if(a[i-1]==b[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][n];
    }
};
