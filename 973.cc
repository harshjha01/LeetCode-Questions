#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &arr, int k)
    {
        vector<vector<int>> sol;
        priority_queue<pair<int, pair<int, int>>> q;
        for (int i = 0; i < arr.size(); i++)
        {
            q.push({arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1], {arr[i][0], arr[i][1]}});
            if (q.size() > k)
            {
                q.pop();
            }
        }
        while (!q.empty())
        {
            pair<int, int> temp = q.top().second;
            q.pop();
            sol.push_back({temp.first, temp.second});
        }
        return sol;
    }
};
int main()
{

    return 0;
}