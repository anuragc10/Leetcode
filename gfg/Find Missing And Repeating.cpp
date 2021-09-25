class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        map<int,int> mp;
        int r=0;
        int m=0;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            if(mp.find(i)==mp.end())
            {
                m=i;
                break;
            }
        }
        for(auto j: mp)
        {
            if(j.second >1)
            {
                r=j.first;
                break;
            }
        }
        arr[0]=r;
        arr[1]=m;
        return arr;
        
    }
};
