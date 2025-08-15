class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int A=0,i=0,count = 0;
        while (i<n){
            if (nums[i]==1){
                count++;
            }
            else if (nums[i]!=1) {
                count = 0;
            }
            i++;
            A = max(A,count);
        }
        return A;
    }
};