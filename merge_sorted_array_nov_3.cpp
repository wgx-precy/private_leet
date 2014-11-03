// Merge Sorted Array

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int *result = new int(m+n);
        int i = 0, j = 0,p = 0;
        while(i<m && j<n){
            if(A[i] <= B[j]) {
                result[p++] = A[i++];
            } else {
                result[p++] = B[j++]
            }
        }
        while(i<m) {
            result[p++] = A[i++];
        }
        while(j<n) {
            result[p++] = B[j++]
        }
        A = result;
    }
};
