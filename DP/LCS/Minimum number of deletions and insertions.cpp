class Solution{
		

	public:
	int minOperations(string a, string b) 
	{ 
	    //deletion = m- lcs and insertion = n- lcs 
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
	                    t[i][j]=t[i-1][j-1]+1;
	                }
	            else{
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    int deletion=abs(n-t[n][m]);
	    int insertion=abs(m-t[n][m]);
	    return deletion+insertion;
	} 
};
