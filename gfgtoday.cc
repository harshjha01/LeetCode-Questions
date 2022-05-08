#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> helper(set<int> s, int curr)
    {
        if (s.size() < 3)
        {
            return {-1};
        }
        int prevprev = -1, prev = -1;
        for (auto i : s)
        {
            if (i == curr)
            {
                if (prevprev == -1 || prev == -1)
                {
                    return {-1};
                }
                return {prevprev, prev, curr};
            }
            else
            {
                prevprev = prev;
                prev = i;
            }
        }
        return {-1};
    }
    vector<int> maxProductSubsequence(int *arr, int n)
    {
        set<int> s;
        int sol = INT_MIN;
        vector<int> ans = {-1};
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
            vector<int> temp = helper(s, arr[i]);
            if (temp[0] != -1)
            {
                if (temp[0] * temp[1] * temp[2] > sol)
                {
                    sol = temp[0] * temp[1] * temp[2];
                    ans = {temp[0], temp[1], temp[2]};
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}