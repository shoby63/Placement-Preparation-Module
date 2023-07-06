class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
       
       // TC = O(N*N) + O(N*N) = O(N*N)
       // SC = O(1)

        //calculate transpose

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
               swap(matrix[i][j], matrix[j][i]);
            }
        }
       
       //now calculate the reverse of the matrix

        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};