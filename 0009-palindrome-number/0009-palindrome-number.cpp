class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindrome, nor if ends with 0 but not zero itself
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int reverted = 0;
        while (x > reverted) {
            reverted = reverted * 10 + x % 10;
            x /= 10;
        }
        // Check for both even and odd length numbers
        return x == reverted || x == reverted / 10;
    }
};
