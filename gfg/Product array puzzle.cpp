class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        vector<long long int> l(n,1);
        vector<long long int> r(n,1);
        
        long long int s=1;
        
        for(int i=1;i<n;i++)
        {
            s=s*nums[i-1];
            l[i]=s;
        }
        
        s=1;
        
        for(int i=n-2;i>=0;i--)
        {
            s=s*nums[i+1];
            r[i]=s;
        }
        
        for(int i=0;i<n;i++)
        {
            l[i]=l[i]*r[i];
        }
        return l;
    }
};
