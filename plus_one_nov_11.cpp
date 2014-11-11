// Plus One

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> result;
        if(!digits.empty()) {
            int tmp = 1;
            for(int i = 0; i < digits.length();i++) {
                result.push_back((digits[i]+tmp)%10);
                tmp = (digits[i]+tmp)/10;
            }
            digits.reverse();
        }
        return result;
    }
}
