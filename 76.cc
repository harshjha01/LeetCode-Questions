#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        int size = INT_MAX;
        unordered_map<char, int> m;
        string sol = "";
        for (auto i : t)
        {
            m[i]++;
        }
        int i = 0, j = 0, n = s.size(), k = m.size();
        while (j < n)
        {
            if (m.count(s[j]) > 0)
            {
                m[s[j]]--;
                if (m[s[j]] == 0)
                {
                    k--;
                }
            }
            if (k == 0)
            {
                string solcand = s.substr(i, j - i + 1);
                if (size > solcand.size())
                {
                    sol = solcand;
                }
                while (k == 0)
                {
                    if (m.count(s[i]) > 0)
                    {
                        m[s[i]]++;
                        if (m[s[i]] == 1)
                        {
                            k++;
                        }
                    }
                    string solcand = s.substr(i, j - i + 1);
                    if (size > solcand.size())
                    {
                        sol = solcand;
                    }
                }
            }
        }
        

        return sol;
    }
};
int main()
{

    return 0;
}