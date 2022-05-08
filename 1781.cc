#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<unordered_map<char, int>> unarr;
    void subString(string str, int n)
    {
        for (int len = 1; len <= n; len++)
        {
            for (int i = 0; i <= n - len; i++)
            {
                unordered_map<char, int> mp;

                int j = i + len - 1;
                for (int k = i; k <= j; k++)
                {
                    mp[str[k]]++;
                }
                unarr.push_back(mp);
            }
        }
    }

    int returnbooty(unordered_map<char, int> s)
    {
        if (s.size() == 0)
        {
            return 0;
        }
        int maxi = INT_MIN, mini = INT_MAX;
        for (auto i : s)
        {
            maxi = max(maxi, i.second);
            mini = min(mini, i.second);
        }
        return maxi - mini;
    }
    int beautySum(string s)
    {
        int sol = 0;
        subString(s, s.size());
        // unarr
        for (auto i : unarr)
        {
            sol += returnbooty(i);
        }
        return sol;
    }
};
class Solution
{
public:
    int helper(unordered_map<char, int> mp)
    {
        int maxi = INT_MIN, minni = INT_MAX;
        for (auto j : mp)
        {

            maxi = max(maxi, j.second);
            minni = min(minni, j.second);
        }
        return maxi - minni;
    }
    int beautySum(string s)
    {
        int sol = 0;
        for (int i = 0; i < s.size(); i++)
        {
            unordered_map<char, int> mp;
            int maxi = INT_MIN, minni = INT_MAX;
            for (int j = i; j < s.size(); j++)
            {
                mp[s[j]]++;
                sol += helper(mp);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}