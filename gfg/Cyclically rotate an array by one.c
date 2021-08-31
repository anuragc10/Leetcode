void rotate(int arr[], int n)
{
    int t=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        int t=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=t;
    }

}
