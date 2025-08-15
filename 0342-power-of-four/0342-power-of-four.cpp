class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555);
       /* if (n==0) return false;
        while (n!=0){
            if (n == 1) return true;
            else if (n % 4 != 0) return false;
            else n=n/4;
        } 
        return true; */
    }
};