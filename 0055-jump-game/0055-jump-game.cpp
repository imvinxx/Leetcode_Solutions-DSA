class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i=-1;
        int maxIndex = 0;
        if (n==1) return true;
        while(i<n){ 
            i++;
            maxIndex = max(maxIndex, (i+nums[i]));
            if (maxIndex == i && nums[i]==0) return false;
            else if (maxIndex>=n-1) return true;
        }
        return true;
    }
};