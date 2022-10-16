class Solution {
public:
  const bool canPlaceBalls(vector<int> pos, int sep, int target){
        int balls = 1;
        int location = pos[0];
        for(int i = 1; i < pos.size(); i++){
            int currLoc = pos[i];
            if(currLoc - location >= sep){
                balls++;
                location = currLoc;
                if(balls == target)
                    return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int s = 0;
        int e = position[n-1] - position[0];
        int ans = -1;
        while(s <= e){
            int mid = s + (e - s)/2;
            bool canPlace = canPlaceBalls(position, mid, m);
            if(canPlace){
                ans = mid;
                s = mid +1;
            }
            else{
                e = mid -1;
            }
        }
        return ans;
        
    }
};
