class Solution{

  public:
     
    int subset(int arr[],int W,int n)
    {
        int t[n+1][W+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<W+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                {
                    t[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        vector<int> v;
        for(int j=0;j<=(W)/2;j++)
        {
            if(t[n][j]){
                v.push_back(j);
            }
        }
        int mn=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            mn=min(mn,W-2*v[i]);
        }
        return mn;
    }
    
	int minDifference(int arr[], int n)  { 
	    int s=0;
	    for(int i=0;i<n;i++)
	    {
	        s=s+arr[i];
	    }
	    return subset(arr,s,n);
	} 
};
