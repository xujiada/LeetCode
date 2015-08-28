class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        for(auto i = 0; i < numRows; i++)
        {
            ret.push_back(vector<int>(i+1, 1));  //将i+1个1压入ret中
            for(auto j = 1; j < i; j++)
                ret[i][j] = ret[i-1][j] + ret[i-1][j-1];
        }
        return ret;
    }
};