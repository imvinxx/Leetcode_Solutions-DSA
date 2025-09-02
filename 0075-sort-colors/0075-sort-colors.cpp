class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0,k=n-1;
        while (j<=k){
            if (nums[j]==0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j++;
            }
            else if (nums[j]==1){
                j++;
            }
            else{
                int temp = nums[k];
                nums[k] = nums[j];
                nums[j] = temp;
                k--;
            }
            
        }
        
    }
};