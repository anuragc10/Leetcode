class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int sum) {
        vector<int> ans,v;
        v=nums;
        int l, r;
        sort(nums.begin(),nums.end());
        l = 0;
        int ind1;
        int ind2;
        r = nums.size() - 1;
        while (l < r) {
            if (nums[l] + nums[r] == sum)
            {
                ind1=nums[l];
                ind2=nums[r];
                break;
            }
            else if(nums[l] + nums[r] < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==ind1 || v[i]==ind2)
            {
                ans.push_back(i);
            }
            if(ans.size()==2)
            {
                break;
            }
        }
        return ans;
        
    }
};
