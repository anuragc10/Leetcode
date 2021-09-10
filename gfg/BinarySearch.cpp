int binarysearch(int arr[],int l, int r,int k)
    {
        if(r>=l){
            int mid=(l+r+1)/2;
            if(arr[mid]==k){
                return 1;
            }
            if(arr[mid]>k)
            {
                return binarysearch(arr,0,mid-1,k);
            }
            return binarysearch(arr,mid+1,r,k);
        }
        return -1;
    }
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       return binarysearch(arr,0,N-1,K);
       
       
    }
