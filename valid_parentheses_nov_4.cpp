//Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        if(s == "")
            return true;
        stack<char> container;
        int i = 0;
        while(i< s.length()) {
            if(s[i] == '('|| s[i] == '{' || s[i] == '[') {
                container.push(s[i++]);
            } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(container.top == s[i++]) {
                    container.pop();
                } else
                    return false;
            }
        }
        if(container.empty())
            return true;
        else
            return false;

    }
};
