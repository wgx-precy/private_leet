//Remove Element

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n == 0) return 0;
        int remove_point = 0;
        int length = n;
        for (int i = 0; i < n; i++) {
            if(A[i] == elem)
                length--;
            else {
                A[remove_point++] = A[i];
            }
        }
        return length;
    }
};
