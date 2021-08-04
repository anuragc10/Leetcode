class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        long long int c=1;
        for(int l=1;l<=rowIndex+1;l++)
        {
            v.push_back(c);
            c=c*(rowIndex-l+1)/l;
        }
        return v;
    }
};
