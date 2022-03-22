class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int> v;
       map<int,int> mp;
       for(int i=0;i<n;i++)
       {
           if(mp.find(a[i])==mp.end())
           {
               mp.insert({a[i],1});
           }
           else
           {
               mp[a[i]]++;
           }
       }
       for(auto it : mp)
       {
           v.push_back(it.first);
        //   cout<< it.first<<" ";
       }
    //   sort(v.begin(),v.end());
       int m=v.size();
       int t[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                else if(a[i-1]==v[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
    }
};
