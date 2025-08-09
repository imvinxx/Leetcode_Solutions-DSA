class Solution {
public:
    int reverse(int x) {
        int rem;
        long reversed = 0;
        while (x!=0){
            rem = x%10;
            reversed = reversed*10+rem;
            x/=10;
        }
        if (reversed<pow(-2,31)) return 0;
        else if (reversed>(pow(2,31)-1)) return 0;
        else return reversed;
    }
};