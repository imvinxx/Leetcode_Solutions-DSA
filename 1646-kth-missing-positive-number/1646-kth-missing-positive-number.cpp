class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0,n=1;
        int count=0;
        while (count<k){
            if (i<arr.size()){
                if (arr[i]==n) {
                    i++;
                    n++;
                }
                else if (arr[i]!=n){
                    n++;
                    count++;
                }
            }
            else {
                n++;
                count++;
            }
            
        }

        return n-1;
    }
};