#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> sol;
        for (int i = 0; i < intervals.size() - 1; i++)
        {
            vector<int> temp1 = intervals[i];
            vector<int> temp2 = intervals[i];
            if (temp1[1] > temp2[0])
            {
                vector<int> ll; //{temp1[0], temp2[1]};
                ll.push_back(temp1[0]);
                ll.push_back(temp2[1]);
                sol.push_back(ll);
            }
            else
            {
                sol.push_back(temp1);
            }
        }
        vector<int> f;
        vector<int> s;
        for (int i = 0; i < f.size(); i++)
        {
            if (s[i] > f[i + 1])
            {
                sol.push_back({f[i], s[i]});
            }
            else
            {
                sol.push_back({f[i + 1], s[i + 1]});
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}