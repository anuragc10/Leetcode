class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<v2.size();i++)
        {
            m[v2[i]]++;
        }
        for(int i=0;i<v1.size();i++)
        {
            if(m.count(v1[i])==1 && m[v1[i]]!=0)
            {
                v.push_back(v1[i]);
                m[v1[i]]--;
            }
        }
        return v;
    }
};
