class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0;
        int min=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else{
                m=max(m,prices[i]-min);
            }
        }
        return m;
    }
};
