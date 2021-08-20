class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> v;
        vector<int> ans; 
        int su=s;
        int c=0;
        int t=0;
        int i=c;
        while(i<n)
        {   
            su=su-arr[i];
            if(su>0)
            {
                i=i+1;
            }
            if(su==0){
                v.push_back(c+1);
                v.push_back(i+1);
                t=1;
                return v;
            }
            if(su<0)
            {
                v.clear();
                c=c+1;
                i=c;
                su=s;
            }
            
        }
        if(t==0){
            ans.push_back(-1);
            return ans;
        }
        
    }
};
