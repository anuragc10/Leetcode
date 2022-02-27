int t[101][101];
void LCS(vector<int> a, vector<int> b,int n, int m)
{
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
            else {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
}

vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) {
    int n=a.size();
    int m=b.size();
    LCS(a,b,n,m);
    int i=n;
    int j=m;
    vector<int> v;
    while(i>0 and j>0)
    {
        if(a[i-1]==b[j-1])
        {
            v.push_back(a[i-1]);
            i=i-1;
            j=j-1;
        }
        else{
            if(t[i-1][j]>t[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
