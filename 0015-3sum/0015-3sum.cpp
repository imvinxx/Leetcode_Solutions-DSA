class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            if (nums[i] > 0) {
                break;
            }
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                long long currentSum = static_cast<long long>(nums[i]) + nums[left] + nums[right];
                
                if (currentSum < 0) {
                    left++;
                } else if (currentSum > 0) {
                    right--;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left+1]) {
                        left++;
                    }
                    
                    while (left < right && nums[right] == nums[right-1]) {
                        right--;
                    }
                    
                    left++;
                    right--;
                }
            }
        }
        
        return result;
    }
};
