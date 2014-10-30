//ZigZag Conversion

class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows >= s.length())
            return s;
        string result = "";
        for(int i = 1; i <= nRows;i++) {
            if(i == 1 || i == nRows) {
                int jump = 2*nRows - 3 + 1;
                for(int j = (i-1); j < s.length(); ) {
                    result+=s[j];
                    j+=jump;
                }

            } else {
                int jump = 2*(nRows-i+1) -3 + 1;
                for(int j = (i-1); j < s.length(); ) {
                    result+=s[j];
                    j+=jump;
                }
            }
        }
        return result;
    }
};
