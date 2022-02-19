public:
    void heapify(int arr[], int n, int i)  
    {
    }
    public:
    void buildHeap(int arr[], int n)  
    { 
    }
    public:
    void heapSort(int arr[], int n)
    {
        //code here
        priority_queue<int> maxh;
        for(int i=0;i<n;i++)
        {
            maxh.push(arr[i]);
        }
        vector<int> v;
        while(maxh.size()!=0)
        {
            v.push_back(maxh.top());
            maxh.pop();
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i];
        }
    }
