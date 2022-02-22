class Solution{
public:
    int subset(int n,int arr[],int W)
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
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }

        if(t[n][W])
        {
            return 1;
        }
        else{
            return 0;
        }
        
    }
    int equalPartition(int n, int arr[])
    {
        int s=0;
       for(int i=0;i<n;i++)
       {
           s=s+arr[i];
       }
       if(s%2==0)
       {
            return subset(n,arr,s/2);   
       }
       else{
           return 0;
       }
    }
};
