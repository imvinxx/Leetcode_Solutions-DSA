class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int num;
        for (int i=0;i<n;i++){
            num=nums[i];
            int digi = 0;
            while (num!=0){
                digi++;
                num /= 10;
            }
            if (digi%2==0) {
                count++;
            }
        }
        return count;
        
    }
};