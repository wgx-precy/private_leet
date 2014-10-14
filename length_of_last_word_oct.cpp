
//Length of Last Word

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int result = 0;
        bool previous = false;
        int i = 0;
        while(s[i] != '/n') {
            if(previous && s[i] != ' ') {
                result = 0;
                result++;
            } else {
                if(s[i] != ' ') {
                    result++;
                    previous = false;
                }
                if(s[i] == ' ') previous = true;
            }
            i++;
        }
        return result;
    }
}
