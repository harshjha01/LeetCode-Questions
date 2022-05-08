#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    unordered_map<char, int> m;
    bool ispossible()
    {
        int count = 0;
        for (auto i : m)
        {
            if (i.second % 2 == 1)
            {
                count++;
                if (count > 1)
                {
                    return false;
                }
            }
        }
        return true;
    }
    long long wonderfulSubstrings(string s)
    {
        long long sol = s.size(), n = s.size();
        int i = 0, j = 0;
        bool whilekro = true;
        while (j < n && whilekro)
        {
            m[s[j]]++;
            if (ispossible)
            {
                sol++;
            }
            if (j == n - 1)
            {
                whilekro = false;
                while (i != j)
                {
                    m[s[i]]--;
                    if (ispossible)
                    {
                        sol++;
                    }
                    i++;
                }
            }
        }
        return sol - 2;
    }
};
int main()
{

    return 0;
}