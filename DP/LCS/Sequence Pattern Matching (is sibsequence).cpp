class Solution {
public:
    bool isSubsequence(string a, string b) {
        int n=a.length();
        int m=b.length();
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                else if(a[i-1]==b[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        if(t[n][m]==n)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
