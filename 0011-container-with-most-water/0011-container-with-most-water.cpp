class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int F=0;
        int i=0,j=n-1;
        while (i<j){
            int mini = min(height[i],height[j]);
            int A = mini*(j-i);
            F = max(A,F);
            if (height[i]>height[j]) j--;
            else i++;
            
            
        }
        return F;
    }
};