//string to integer

class Solution {
public:
    int atoi(const char *str) {
        long long int result = 0;
        int i = 0;
        bool negative = false
        while(str[i] != '\0') {
            if(str[i] != ' ') {
                if(str[i] == '-') negative = true;
                else if(str[i] == '+') negative = false;
                else {
                    int tmp = str[i] - '0';
                    if(tmp > 9 || tmp < 0){
                        if(result == 0) return result;
                    }

                    result = (result * 10) + tmp;
                    if(!negative && result > INT_MAX) return INT_MAX;
                    else if(negative && result > INT_MAX) return INT_MIN;
                }
            }
        }
        if(negative) return -result;
        return result;
    }
}
