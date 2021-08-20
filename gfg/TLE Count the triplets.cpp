class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int c=0;
	    int ans=0;
	    vector<int> v;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++){
	            int s=arr[i]+arr[j];
	            v.push_back(s);
	            c=c+1;
	        }
	    }

	    for(int i=0;i<v.size();i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(v[i]==arr[j])
	            {
	                ans=ans+1;
	            }
	        }
	    }
	    return ans;
	}
};
