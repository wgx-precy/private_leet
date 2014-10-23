//Valid Palindrome

class Soulution {
public:
    bool isPalindrome(string s) {
        stack<char> reverse;
        vector<char> str;
        bool is_empty = true;
        bool result = true;
        int i = 0;
        while(i < s.length()) {
            if(s[i] != ' ') {
                is_empty = false;
                if(s[i] >= 'a' && s[i] <= 'z') {
                    reverse.push(s[i]);
                    str.push_back(s[i]);
                }
            }
            i++;
        }
        i = 0;
        if(is_empty) return true;
        while(!reverse.empty()) {
            if(str[i] == reverse.top()||(str[i]-32) == reverse.top() || (str[i++] + 32) == reverse.top()) {
                reverse.pop();
            } else {
                return false;
            }
        }
        return true;
    }
};
