//Pascal's Triangle II

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        if(rowIndex == 0) return result;
        int *res = getRowArray(rowIndex);
        for(int i = 0; i < rowIndex; i++) {
            result.push_back(res[i]);
        }
        return result;
    }
    int *getRowArray(int index) {
        int *res = NULL;
        res = new int[index];
        for(int i = 0; i < index; i++) {
            res[i] = 0;
        }
        res[0] = 1;
        for(int i = 0; i < index; i++) {
            int tmp = res[0];
            int next = 0;
            for(int j =0; j < i; j++) {
                next = res[j];
                res[j+1] = next + res[j+1];
            }
        }
        return res;
    }
};
