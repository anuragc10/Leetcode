class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      map<int,int> mp;
      for(int i=0;i<n;i++)
      {
          mp[arr[i]]++;
      }
      int res=1;
      int count=1;
      
      int k;
      for(int i=0;i<mp.size();i++){
        if(mp.find(arr[i]-1)==mp.end())
        {
            count=1;
            k=arr[i];
        
        while(mp.find(k+1)!=mp.end())
        {
            count++;
            k++;
        }
        res=max(res,count);
        }
      }
      return res;
      
    }
};
