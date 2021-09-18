class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int k=1;
        for(int i=0;i<target.size();)
        {
            if(k==target[i])
            {
                v.push_back("Push");
                i++;
            }
            else
            {
                v.push_back("Push");
                v.push_back("Pop");    
            }
            k++;
        }
        return v;
    }
};
