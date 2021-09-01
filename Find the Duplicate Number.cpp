class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int k;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]++;
            }
            
            else
            {
                k=nums[i];
                break;
            }
            
        }
        return k;
        
    }
};
