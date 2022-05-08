#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        unordered_map<char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            // mp.insert()
            mp[s[i]] = i;
        }
        vector<int> sol;
        int prev = -1, maax = 0;
        for (int i = 0; i < n; i++)
        {
            auto itr = mp.find(s[i]);
            maax = max(maax, itr->second);
            if (i == maax)
            {
                sol.push_back(maax - prev);
                prev = maax;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}