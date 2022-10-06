class Solution {
public:
    bool isPalindrome(int x) {
        
        int origNum = x;
        long reversed_number = 0, remainder;
        bool isPos = origNum >= 0;
        
        
        while(x != 0) {
            remainder = x % 10;
            reversed_number = reversed_number * 10 + remainder;
            x /= 10;
        }

        
        
        return (isPos && (origNum == reversed_number));
    }
};