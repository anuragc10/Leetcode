class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v2;
        for(int l=1;l<=numRows;l++)
        {
            int c=1;
            vector<int> v;
            for(int i=1;i<=l;i++)
            {
                v.push_back(c);
                c=c*(l-i)/i;
            }
            v2.push_back(v);
        }
        return v2;
    }
};
