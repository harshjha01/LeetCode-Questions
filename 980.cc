#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
  int dfs(vector<vector<int>> grid, int zero, int x, int y)
  {
    if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == -1)
    {
      return 0;
    }
    if (grid[x][y] == 2)
    {
      return zero == -1 ? 1 : 0;
    }
    grid[x][y] = -1;
    zero--;
    int total = dfs(grid, zero, x + 1, y) +
                dfs(grid, zero, x, y + 1) +
                dfs(grid, zero, x - 1, y) +
                dfs(grid, zero, x, y - 1);
    grid[x][y] = 0;
    zero++;
    return total;
  }
  int uniquePathsIII(vector<vector<int>> &grid)
  {
    int zero = 0, sx = 0, sy = 0;
    for (int i = 0; i < grid.size(); i++)
    {
      for (int j = 0; j < grid[0].size(); j++)
      {
        if (grid[i][j] == 0)
        {
          zero++;
        }
        {
          if (grid[i][j] == 1)
          {
            sx = i;
            sy = j;
          }
        }
      }
    }
    return dfs(grid, zero, sx, sy);
  }
};
int main()
{

  return 0;
}