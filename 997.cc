#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<pair<int, int>> v(n + 1, {0, 0});
        for (int i = 0; i < trust.size(); i++)
        {
            v[trust[i][0]].first++;
            v[trust[i][1]].second++;
        }
        for (int i = 0; i < n + 1; i++)
        {
            if (v[i].first == 0 && v[i].second == n - 1)
            {
                return i;
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {

        vector<int> e(n, 0);
        // for (auto i : trust)
        // {

        //     int u = i[0];
        //     int v = i[1];
        //     e[v]++;
        //     e[u]--;
        // }
        // for (int i = 0; i < trust.size(); i++)
        // {
        //     // v[trust[i][0]].first++;
        //     // v[trust[i][1]].second++;
        //     e[trust[i][0]]++;
        //     e[trust[i][1]]++;
        // }
        for (int i = 0; i < trust.size(); i++)
        {
            vector<int> temp = trust[i];
            e[temp[0]]++;
            e[temp[1]]--;
        }

        for (int i = 1; i <= n; i++)
        {
            if (e[i] == n - 1)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{

    return 0;
}