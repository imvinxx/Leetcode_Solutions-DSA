class Solution {
    int leftval(vector<int>& nums, int target){
        int n=nums.size();
        int i=0,j=n-1;
        int out = -1;
        while (i<=j){
            int mid = i+(j-i)/2;
            if (nums[mid]==target){
                out=mid;
                j=mid-1;
            }
            else if (nums[mid]<target) i=mid+1; 
            else j=mid-1;  
        }
        return out;
    }
    int rightval(vector<int>& nums, int target){
        int n=nums.size();
        int i=0,j=n-1;
        int out = -1;
        while (i<=j){
            int mid = i+(j-i)/2;
            if (nums[mid]==target){
                out=mid;
                i=mid+1;
            }
            else if (nums[mid]>target) j=mid-1; 
            else i = mid+1;  
        }
        return out;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = leftval(nums,target);
        int right = rightval(nums,target);
        return {left,right};
    }
};