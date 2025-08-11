class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        // Initialize closestSum with the sum of the first three elements
        // after casting them to long long to prevent overflow.
        long long closestSum = static_cast<long long>(nums[0]) + nums[1] + nums[2]; 
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                long long currentSum = static_cast<long long>(nums[i]) + nums[left] + nums[right];

                if (currentSum == target) {
                    return target;
                }

                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return static_cast<int>(closestSum);
    }
};
