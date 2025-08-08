class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1); 
        }

        int n1 = nums1.size();
        int n2 = nums2.size();
        int low = 0;
        int high = n1;
        int totalLength = n1 + n2;

        while (low <= high) {
            int partition1 = (low + high) / 2;
            int partition2 = (totalLength + 1) / 2 - partition1;

            int maxLeft1 = (partition1 == 0) ? numeric_limits<int>::min() : nums1[partition1 - 1];
            int minRight1 = (partition1 == n1) ? numeric_limits<int>::max() : nums1[partition1];

            int maxLeft2 = (partition2 == 0) ? numeric_limits<int>::min() : nums2[partition2 - 1];
            int minRight2 = (partition2 == n2) ? numeric_limits<int>::max() : nums2[partition2];

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if (totalLength % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                } else {
                    return max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                high = partition1 - 1; 
            } else {
                low = partition1 + 1;
            }
        }
        return 0.0; 
    }
};