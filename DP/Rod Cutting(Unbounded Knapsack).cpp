class Solution{
  public:
    int Unkanpsack(int wt[],int price[],int W)
    {
        int t[W+1][W+1];
        for(int i=0;i<W+1;i++)
        {
            for(int j=0;j<W+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        // val[]----> price[];
        // wt[]----> length[];
        for(int i=1;i<W+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                if(wt[i-1]<=j)
                {
                    t[i][j]=max((price[i-1]+t[i][j-wt[i-1]]),t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[W][W];
    }
    
    int cutRod(int price[], int n) {
        int length[n];
        for(int i=0;i<n;i++)
        {
            length[i]=i+1;
        }
        return Unkanpsack(length,price,n);
    }
};
