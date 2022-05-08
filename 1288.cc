#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    // bool cmp(vector<int> a, vector<int> b)
    // {
    //     if (a[0] != b[0])
    //     {
    //         return a[0] < b[0];
    //     }
    //     return a[0] > b[0];
    // }
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        if (a[0] > b[0])
        {
            return false;
        }
        if (a[0] == b[0])
        {
            if (a[1] > b[1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), cmp);
        int ans = 0;
        int pos = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            // [[1,2],[1,4],[3,4]]
            vector<int> temparr1 = intervals[i];
            // vector<int> temparr2 = intervals[i + 1];
            // int a = temparr1[0];
            int b = temparr1[1];
            // int c = temparr2[0];
            // int d = temparr2[1];
            // if (b >= d)
            // {
            //     ans--;
            //     i++;
            // }
            if (b <= pos)
            {
                ans++;
            }
            else
            {
                pos = b;
            }
        }
        return intervals.size() - ans;
    }
};
int main()
{

    return 0;
}