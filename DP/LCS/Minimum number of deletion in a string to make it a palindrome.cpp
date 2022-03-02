int minDeletions(string s, int n) { 
    vector<char> a;
    vector<char> b;
    for(int i=0;i<n;i++)
    {
        a.push_back(s[i]);
        b.push_back(s[i]);
    }
    reverse(b.begin(),b.end());
    
    int t[n+1][n+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 or j==0)
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
    
    return abs(n-t[n][n]);
    
    
} 
