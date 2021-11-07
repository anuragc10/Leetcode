class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int> mp;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(k-arr[i])!=mp.end())
            {
                c=c+mp[k-arr[i]];
                mp[arr[i]]++;
            }
            else{
               mp[arr[i]]++; 
            }
        }
        return c;
    }
};
