#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if (grid[i][j] == 'O')
        {

            grid[i][j] = '1';

            if (i + 1 < grid.size())
                dfs(grid, i + 1, j);
            if (i > 1)
                dfs(grid, i - 1, j);
            if (j + 1 < grid[i].size())
                dfs(grid, i, j + 1);
            if (j > 1)
                dfs(grid, i, j - 1);
        }
    }
    void solve(vector<vector<char>> &board)
    {
        if (board.size())
        {
            return;
        }
        int row = board.size(), coll = board[0].size();
        for (int i = 0; i < row; i++)
        {
            dfs(board, i, 0);
            dfs(board, i, coll - 1);
        }
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < coll; ++j)
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == '1')
                    board[i][j] = 'O';
    }
};
int main()
{

    return 0;
}