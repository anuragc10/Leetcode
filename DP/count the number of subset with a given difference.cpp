class Solution{

	public:
	int subset(int coins[], int n, int W)
	{
	    int t[n+1][W+1];
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<W+1;j++)
	        {
	            if(j==0)
	            {
	                t[i][j]=0;
	            }
	            if(i==0)
	            {
	                t[i][j]=INT_MAX-1;
	            }
	            if(i==0 and j==0)
	            {
	                t[i][j]=INT_MAX-1;
	            }
	        }
	    }
	    
	    for(int j=1;j<W+1;j++)
	    {
	        if(j%coins[0] ==0)
	        {
	            t[1][j]=j/coins[0];
	        }
	        else{
	            t[1][j]=INT_MAX-1;
	        }
	    }
	    
	    for(int i=2;i<n+1;i++)
	    {
	        for(int j=1;j<W+1;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);
	            }
	            else{
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    if(t[n][W] == INT_MAX - 1) return -1;
	    return t[n][W];
	    
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    return subset(coins,M,V);
	} 
	  
};
