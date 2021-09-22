bool findPair(int arr[], int size, int n){
    //code
    map<int,int> mp;
    
    for(int i=0;i<size;i++)
    {
        mp[arr[i]]++;
    }
    
    for(int i=0;i<size;i++)
    {
        int s=n+arr[i];
        if(mp.find(s)!=mp.end())
        {
            return 1;
        }
    }
    return 0;
}
