// Palindrome Number

//elegant solution
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x == 0) return true;
        if(isPalindrome(x/10,y)&&(x%10 == y%10)) {
            y /= 10;
            return true;
        } else
            return true;
    }
    bool isPalindrome(int x, int &y) {
        isPalindrome(x,x);
    }
};
