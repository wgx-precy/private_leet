// Implement strStr()


class Solution {
public:
    int strStr(char *haystack, char *needle) {
        int i = 0, j = 0, index = -1;
        while(haystack[i] != '\0') {
            if(haystack[i] == needle[j]) {
                j++;index = i;
            } else {
                index = -1;
                j = 0;
            }
            i++;
        }
        if(needle[j] == '\0')
            return index;
        else
            return -1;
    }
};
