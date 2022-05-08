#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countone(vector<int> v)
    {
        int sol = 0;
        for (auto i : v)
        {
            if (i == 1)
            {
                sol++;
            }
        }
        return sol;
    }
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<vector<int>> v;
        for (int i = 0; i < mat.size(); i++)
        {
            auto it = mat[i];
            v.push_back({countone(it), i});
        }
        sort(v.begin(), v.end());
        vector<int> sol;
        for (int i = 0; i < k; i++)
        {
            sol.push_back(v[i][1]);
        }
        return sol;
    }
};
int main()
{

    return 0;
}