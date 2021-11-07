class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int d=INT_MAX;
    
    for(int i=0;i+m-1 <n;i++)
    {
        int diff=a[i+m-1]-a[i];
        d=min(d,diff);
    }
    return d;
    }   
};
