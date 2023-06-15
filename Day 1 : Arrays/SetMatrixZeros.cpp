class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rs(matrix[0].size(),1);
        vector<int> cs(matrix.size(),1);
        int noOfRows = matrix.size();
        int noOfCols = matrix[0].size();
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfCols;j++)
            {
                if(matrix[i][j]==0)
                {
                    rs[j]=0;
                    cs[i]=0;
                }
            }
        }
        for(int i=0;i<noOfRows;i++)
        {
            for(int j=0;j<noOfCols;j++)
            {
                if(rs[j]==0||cs[i]==0)
                    matrix[i][j]=0;
            }
        }
    }
};