//string to integer

class Solution {
public:
    int atoi(const char *str) {
        long long int result = 0;
        int i = 0;
        int negative = 0;
        while(str[i] != '\0') {
            if(str[i] != ' ') {
                if(str[i] == '-'){
                    if(negative != 0) return 0;
                    negative = true;
                }
                else if(str[i] == '+'){
                    if(negative != 0) return 0; 
                    negative = false;
                }
                else {
                    int tmp = str[i] - '0';
                    if(tmp >= 9 && tmp <= 0){
                        result = (result * 10) + tmp;
                        if(negative != -1 && result > INT_MAX) return INT_MAX;
                        else if(negative == -1 && result > INT_MAX) return INT_MIN;
                    } else break;
                }
                if(str[i+1] == ' ')break;
            }
            i++;
        }
        if(negative == -1) return -result;
        return result;
    }
    int atoi_better(const char *str) {
        int sign = 1, base = 0, i = 0;
        whiile (str[i] ==' ') {i++;}
        if(str[i] == '+' || str[i] == '-')
            sign = 1-2*(str[i++] == '-')
        while (str[i] >= '0' && str[i] <= '9') {
            if(base > INT_MAX/10 || (base == INT_MAX/10 && str[i] - '0'>7)) {
                if(sign == 1) return INT_MAX;
                else return INT_MIN;
            }
            base = 10 *base + (str[i++] - '0');
        }
        return base * sign;
    }
}


