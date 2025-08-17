class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        int i,j=1,k=1;
        for (i=0;i<n;i++){
            answer[i] = j;
            j = j*nums[i];
        }
        for (i=n-1;i>=0;i--){
            answer[i] = answer[i]*k;
            k = k*nums[i];
        }
        return answer;
    }
};