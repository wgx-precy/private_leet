// Roman to Integer

class Solution {
public:
    int convert(char c) {
        switch(c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
    };
    int romanToInt(string s) {
        int result = 0;
        int i = 0;
        while(i < s.length()) {
            if((i + 1) < s.length()) {
                int a = convert(s[i]);
                int b = convert(s[i+1]);
                if(a < b) {
                    result += (b-a);
                    i++;
                } else if(a == b) {
                    result += (a+b);
                    i++;
                } else
                    result +=a;
            } else {
                result += convert(s[i]);
            }
            i++;
        }
        return result;
    }
};
