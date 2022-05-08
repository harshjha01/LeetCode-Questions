#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void printarr(vector<int> arr)
    {
        for (auto i : arr)
        {
            cout << i << " ";
        }
    }
    
    int twoCitySchedCost(vector<vector<int>> &costs)
    {

        int sol = 0, n = costs.size();
        vector<pair<int, int>> a, b;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp = costs[i];
            a.push_back({temp[0], i});
            b.push_back({temp[i], i});
        }
        int asize = 0, bsize = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int totalcost = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i].second == b[i].second)
            {
                if (a[i].first <= b[i].first and asize <= n / 2)
                {
                    totalcost += a[i].first;
                    asize++;
                }
                else if (a[i].first >= b[i].first and bsize <= n / 2)
                {
                    totalcost += b[i].first;
                    bsize++;
                }
            }
            else
            {
                sol += a[i].first;
                sol += b[i].first;
                asize++, bsize++;
            }
        }
        return totalcost;
    }
};
int main()
{

    return 0;
}