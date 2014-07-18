/*Distinct Subsequences */
//Given a string S and a string T, count the number of distinct subsequences of T in S.

//A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ACE" is a subsequence of "ABCDE" while "AEC" is not).

int numDistinct(string S, string T){
    int record[200];
    for(int i = 1; i<200;i++) record[i] = 0;
    record[0] = 1;
    for(int i = 1; i<S.size(); i++) {
        for(int j = T.size();j>=1;j--) {
            if(S[i-1]==T[j-1]) record[j]+=record[j-1];
        }
    }
    return record[T.size()];
}
