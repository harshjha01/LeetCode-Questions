#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canConstruct(string r, string m)
    {
        unordered_map<char, int> maap;
        for (auto &i : m)
        {
            maap[i]++;
        }
        for (auto &i : r)
        {
            auto it = maap.find(i);
            if (it == maap.end())
            {
                return false;
            }
            else
            {
                maap[i]--;
                if (maap[i] == 0)
                {
                    maap.erase(maap[i]);
                }
            }
        }
        return true;
    }
};
class Solution
{
public:
    bool canConstruct(string first, string second)
    {
        unordered_map<char, int> m;
        for (auto &i : second)
        {
            m[i]++;
        }
        for (int i = 0; i < first.size(); i++)
        {
            if (m.find(first[i]) != m.end())
            {
                m[first[i]]--;
                if (m[first[i]] == 0)
                {
                    m.erase(m[first[i]]);
                }
            }
        }
        if (m.size() == 0)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}