class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        vector<int> a=arr;
        sort(a.begin(),a.end());
        
        for(int i=0;i<a.size()-3;i++)
        {
            for(int j=i+1;j<a.size()-2;j++)
            {
                int l=j+1;
                int r=a.size()-1;
                while(l<r)
                {
                    if(a[i]+a[j]+a[l]+a[r]==k)
                    {
                        vector<int> v;
                        v.push_back(a[i]);
                        v.push_back(a[j]);
                        v.push_back(a[l]);
                        v.push_back(a[r]);
                        l++;
                        r--;
                        ans.push_back(v);
                    }
                    else if(a[i]+a[j]+a[l]+a[r] < k)
                    {
                        l++;
                    }
                    else{
                        r--;
                    }
                    
                }
            }
            
        }
        return ans;
        
    }
};
