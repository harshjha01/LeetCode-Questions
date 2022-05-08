#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        int n = nums.size(), sol = 0;
        unordered_map<int, int> m;
        for (auto &i : nums)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            m[i.first]--;
            int val = i.first - k;
            if (m.find(val) != m.end())
            {
                if (m[val] > 0)
                {
                    sol++;
                }
            }
            m[i.first]++;
        }
        return sol;
    }
};
int main()
{

    return 0;
}
// class Solution
// {
// 	public:
// 	//Function to find number of strongly connected components in the graph.
//  stack<int> s;
// void toposort(vector<int> adj[], bool vis[], int start)
// {
//     vis[start] = true;
//     for (auto i : adj[start])
//     {
//         if (!vis[i])
//         {
//             toposort(adj, vis, i);
//         }
//     }
//     s.push(start);
// }
// void reversedfs(vector<int> adj[], bool vis[], int start)
// {
//     vis[start] = true;
//     for (auto i : adj[start])
//     {
//         if (!vis[i])
//         {
//             toposort(adj, vis, i);
//         }
//     }
// }
// int kosaraju(int v, vector<int> adj[])
// {
//     bool vis[v] = {false};

//     for (int i = 0; i < v; i++)
//     {
//         if (!vis[i])
//         {
//             toposort(adj, vis, i);
//         }
//     }
//     //inverse
//     vector<int> transpose[v];
//     for (int i = 0; i < v; i++)
//     {
//         vis[i] = false;
//         for (auto it : adj[i])
//         {
//             transpose[it].push_back(i);
//         }
//     }
//     int sol = 0;
//     while (!s.empty())
//     {
//         int node = s.top();
//         s.pop();
//         if (!vis[node])
//         {
//             sol++;
//             reversedfs(transpose, vis, node);
//         }
//     }
//     return sol;
// }
// };