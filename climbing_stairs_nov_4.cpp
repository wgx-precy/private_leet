// climbing stairs

class Solution {
public:
    int climbStairs(int n) {
        int result = 0;
        climb(result,n);
        return result;
    }

    void climb(int &count, int n) {
        if(n < 0)
            return;
        else if(n == 0)
            count++;
        else {
            climb(count,n-1);
            climb(count,n-2);
        }
    }
};
