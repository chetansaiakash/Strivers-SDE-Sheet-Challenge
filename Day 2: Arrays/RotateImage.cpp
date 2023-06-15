class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Perform transopse for the given matrix
        int n=matrix.size();
        for(int i=0;i<=n-2;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                if(i!=j)
                    swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};