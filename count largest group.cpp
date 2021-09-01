class Solution {
public:
    int digitsum(int m){
        int sum=0;
        while(m>0){
                if(m==0){
                    m=sum;
                    sum=0;
                }
                sum+=m%10;
                m/=10;
            }
        return sum;
    }  
    int countLargestGroup(int n) {
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            int t=digitsum(i);
            mp[t]++;
        }
        vector<int> v;
        cout<<endl;
        for(auto it:mp){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
    
        int count=0;
        int mx=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(v[i]>mx)
            {
                mx=v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==mx){
                count++;
            }
        }
        return count;
    }
    
};
