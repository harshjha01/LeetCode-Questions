#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool checkInclusion(string s1, string s)
    {
        unordered_map<char, int> m;
        for (auto &i : s1)
        {
            m[i]++;
        }
        int n = s1.size();
        int k = m.size();
        int i = 0, j = 0;
        string sol = "";
        while (j < s.size())
        {
            if (m.find(s[j]) != m.end())
            {
                m[s[j]]--;
                if (m[s[j]] == 0)
                {
                    k--;
                }
            }
            if (j - i + 1 < n)
            {
                j++;
            }
            else if (j - i + 1 == n)
            {
                if (k == 0)
                {
                    return true;
                }
                if (m.find(s[i]) != m.end())
                {
                    m[s[j]]++;
                    if (m[s[j]] == 1)
                    {
                        k++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}
void shortest_distance(vector<vector<int>> &dp)
{
    int n = dp.size();
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dp[i][k] != -1 && dp[k][j] != -1)
                {
                    if (dp[i][j] == -1)
                        dp[i][j] = dp[i][k] + dp[k][j];
                    else
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }
}

/// shfdsif
void shortest_distance(vector<vector<int>> &m)
{
    int n = m.size();
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (m[i][k] == -1 || m[k][j] == -1)
                    continue;
                if (m[i][j] == -1)
                    m[i][j] = m[i][k] + m[k][j];
                else
                    m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
            }
        }
    }
}