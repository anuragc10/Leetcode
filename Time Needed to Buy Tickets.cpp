#include <bits/stdc++.h>
class Solution {
public:
    int timeRequiredToBuy(vector<int>& ti, int k) {
        queue<pair<int, int>> q;
        int p=ti[k];
        int c=0;
        for(int i=0;i<ti.size();i++)
        {
            if(i!=k){
            q.push({ti[i],0});
            }
            else{
                q.push({ti[i],1});
            }
        }
        while(!q.empty())
        {
            pair<int, int> qp=q.front();
            int f = qp.first;
            int s = qp.second;
            f=f-1;
            c=c+1;
            q.pop();
            if(f>0)
            {   
                q.push({f,s});
            }
            else{
                if(s==1)
                {
                    return c;
                }
            }
        }
        return c;
    }
};
