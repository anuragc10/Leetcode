#include<bits/stdc++.h>
using namespace std;

int subset(int arr[],int n,int W)
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
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][W];
}

int main()
{
    int arr[]={1,1,2,3};
    int n=4;
    int sum=0;
    int diff=1;
    for(int i=0;i<4;i++)
    {
        sum=sum+arr[i];
    }
    
    int s=(diff+sum)/2;
    
    cout<<subset(arr,n,s);
}
