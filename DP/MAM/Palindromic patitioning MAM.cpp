class Solution{
public:
    int t[1001][1001];
    bool palin(string &str,int i, int j)
    {
        while(i<=j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            else{
                i++;
                j--;
            }
            
        }
        return true;
    }
    int solve(string &str,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        if(palin(str,i,j))
        {
            return 0;
        }
        if(t[i][j]!=-1)
        {
            return t[i][j];
        }
        int mn=INT_MAX;
        int temp;
        for(int k=i;k<j;k++)
        {
            temp=solve(str,i,k)+solve(str,k+1,j)+1;
            mn=min(temp,mn);
        }
        return t[i][j]=mn;
    }
    int palindromicPartition(string str)
    {
        memset(t,-1,sizeof(t));
        int x=str.length()-1;
        return solve(str,0,x);
    }
};
