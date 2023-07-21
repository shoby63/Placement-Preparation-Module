/*Consider a rat placed at (0, 0) in a square matrix of order N * N.
It has to reach the destination at (N - 1, N - 1).
Find all possible paths that the rat can take to reach from source to destination.
The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right).
Value 0 at a cell in the matrix represents that it is blocked and rat
cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.


Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.*/

<------------------------------------------------------------------------Solution---------------------------------------------------------------------------------->

  class Solution{
    public:
    
    void solve(int i, int j, vector<vector<int>> &m, vector<vector<int>>& vis, vector<string>& ans, string move, int n){
        if(i == n-1 && j == n-1)
        {
            ans.push_back(move);
            return;
        }
        
        //downward
        if(i + 1 < n && vis[i + 1][j] == 0 && m[i + 1][j] == 1)
        {
            vis[i][j] = 1;
            solve(i + 1, j, m, vis, ans, move + 'D', n);
            vis[i][j] = 0;
        }
        
        //left
        if(j - 1 >= 0 && vis[i][j - 1] == 0 && m[i][j - 1] == 1)
        {
            vis[i][j] = 1;
            solve(i, j - 1, m, vis, ans, move + 'L', n);
            vis[i][j] = 0;
            
        }
        
        //right
        if(j + 1 < n && vis[i][j + 1] == 0 && m[i][j + 1] == 1)
        {
            vis[i][j] = 1;
            solve(i, j + 1, m, vis, ans, move + 'R', n);
            vis[i][j] = 0;
            
        }
        
        //upward
        if(i - 1 >= 0 && vis[i - 1][j] == 0 && m[i - 1][j] == 1)
        {
            vis[i][j] = 1;
            solve(i - 1, j, m, vis, ans, move + 'U', n);
            vis[i][j] = 0;
            
        }
  }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
     vector<string> ans;
     vector<vector<int>> vis(n, vector < int > (n, 0));
     if (m[0][0] == 1)
        solve(0, 0, m, vis, ans, "", n);
     return ans;
    }
};
