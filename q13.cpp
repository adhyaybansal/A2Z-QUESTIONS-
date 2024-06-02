class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int ornum = x;
        int revNum = 0;
        while(x!=0){
            int ld = x%10;
             if (revNum > (INT_MAX - ld) / 10) {
                return false; // Overflow would occur, so it's not a palindrome
            }
            revNum = (revNum*10) + ld;
            x = x/10;
        }
        return revNum == ornum;
    }
};