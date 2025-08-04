class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i;
        if (n==1) return false;
        sort(nums.begin(),nums.end());
        for (i=0;i<n;i++){
            if (nums[i] == nums[(i+1)%n]){
                return true;
            }
        }
        return false ;
    }
};