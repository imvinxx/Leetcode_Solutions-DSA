class Solution {
public:
    vector<int> sumZero(int n) {
        // for odd
        vector<int>ans(n,0);
        
            for(int i=0;i<n/2;i++){
                ans[i] = rand();
                ans[(n-1)-i]= - ans[i];
            }
        return ans;


    }
};