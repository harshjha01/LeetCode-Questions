#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
    bool findcycle(int i, vector<int> &vis, vector<vector<int>> &adj)
    {
        if (vis[i] == 2)
        {
            return true;
        }
        vis[i] = 2;
        for (int k = 0; k < adj.size(); k++)
        {
            if (vis[adj[k][i]] != 1)
            {
                if (findcycle(k, vis, adj))
                {
                    return true;
                }
            }
        }
        vis[i] = 1;
        return false;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>> adj(numCourses);
        for (int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> vis(numCourses, 0);
        for (int i = 0; i < numCourses; i++)
        {
            if (vis[i] == 0)
            {
                if (findcycle(i, vis, adj))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}