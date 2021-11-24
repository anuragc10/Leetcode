class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        int s=arr.size();
        
        for(int i=0;i<s;i++)
        {
            if(arr[i]<a){
                v1.push_back(arr[i]);
            }
            if(arr[i]>=a && arr[i]<=b)
            {
                v2.push_back(arr[i]);
            }
            if(arr[i]>b){
                v3.push_back(arr[i]);
            }
        }
        
        vector<int> ans;
        ans.insert(ans.begin(), v1.begin(), v1.end());
        ans.insert(ans.end(), v2.begin(), v2.end());
        ans.insert(ans.end(), v3.begin(), v3.end());
        
        for(int i=0;i<s;i++)
        {
            arr[i]=ans[i];
        }

        
    }
};
