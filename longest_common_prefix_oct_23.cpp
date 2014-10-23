//Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        vector<char> container;
        vector<int> counter;
        string result = "";
        if(strs.empty())
            return result;
        for(int i = 0; i < strs.size(); i++) {
            if(strs[i] == "")
                return "";
            for(int j = 0; j < strs[i].size();i++) {
                if(j>=container.size()) {
                    container.push_back(strs[i][j]);
                    counter.push_back(1);
                } else {
                    if(container[j] == strs[i][j]) {
                        counter[j]++;
                    } else 
                        break;
                }
            }
        }
        for(int i = 0; i < counter.size();i++) {
            if(counter[i] == strs.size()) {
                result+= container[i];
            } else {
                break;
            }
        }
        return result;
    }
};
