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
        if(is_empty) return true;
        while(!str.empty()) {
            if(str.front() != reverse.top()) {
                return false;
            } else {
                str.pop_back();
                reverse.pop();
            }
        }
        return true;
    }
};
