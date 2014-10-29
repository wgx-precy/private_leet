//count and say

class Soulution {
public:
    string countAndSay(int n) {
        string result = "";
        if(n == 0) return result;
        string tmp = to_string(n);
        char num = tmp[0]
        int count = 1;
        for(int i = 1; i < tmp.length; i++) {
            if(tmp[i] == num) {
                count++;
            } else {
                result+=to_string(count) + num;
                num = tmp[i];
                count = 1;
            }
        }
        return result;
    }
};
