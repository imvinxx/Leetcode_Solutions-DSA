class Solution {
public:
    int maximum69Number (int num) {
        vector<int>myarr;
        while (num!=0){
            int rem = num%10;
            myarr.push_back(rem);
            num/=10;
        }
        reverse(myarr.begin(),myarr.end());
        for (int k=0;k<myarr.size();k++){
            if (myarr[k] != 9){
                myarr[k] = 9;
                break;
            }
        }
        int nums = 0;
        for (int i=0;i<myarr.size();i++){
            nums = nums*10+myarr[i];
        }
        return nums;
    }
};