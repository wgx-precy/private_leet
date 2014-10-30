// Remove Duplicates from Sorted Array

class Soulution {
public:
    int removeDuplicates(int A[], int n) {
        if(n == 0 || n == 1) return n;
        int updatePoint = 0;
        int updateNumber = A[0];
        int result = n;
        for(int i = 1; i < n; i++) {
            if(updateNumber >= A[i]) {
                result--;
            } else {
                updatePoint++;
                if(updatePoint != i) {
                    A[updatePoint++] = A[i];
                    updateNumber = A[i];
                }
            }
        }
        return result;
    }
};
