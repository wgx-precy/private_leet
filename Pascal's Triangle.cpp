//Pascal's Triangle
/*Given numTows, generate the first numRows of Pascal's triangle.*/
//Wed 4:45pm
vector<vector<int> > generate(int numRows) {
    for(int i = 0; i < numRows; i++) {
	tmp.push_back(1);
	for(int j = 1; j < i; j++) {
	    tmp.push_back(result[i-1][j]+result[i-1][j-1]);
	}
	if(i>0) tmp.push_back(1);
	result.push_back(tmp);
	tmp.clear();
    }
    return result;
}
