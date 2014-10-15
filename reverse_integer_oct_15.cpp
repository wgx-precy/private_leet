// Reverse Integer

class Solution {
public:
    int reverse(int x) {
        stack<int> container;
        int count = 0;
        int result = 0;
        int i = 0;
        while(x != 0) {
            container.push(x%10);
            x = x/10;
            count++;
        }
        while(i < count) {
            result += container.top() * 10^i;
            i++;
        }
        return result;
    }
}
