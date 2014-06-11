//Pascal's TriangleII
/*Given an index k, return the kth row of the pascal's triangle.*/
//Wed 4:59pm
vector<int> getRow(int rowIndex) {
        vector<vector<int> >result;
        vector<int> tmp;
        for(int i = 0; i <= rowIndex; i++) {
            tmp.push_back(1);
            for(int j = 1; j < i; j++) {
                tmp.push_back(result[i-1][j]+result[i-1][j-1]);
            }
            if(i>0) tmp.push_back(1);
            result.push_back(tmp);
            tmp.clear();
        }
        return result[result.size()-1];
    }
}
