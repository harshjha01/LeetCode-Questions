#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        unordered_map<string, int> m;
        bool isodd = false;
        int sol = 0;
        for (auto &i : words)
        {
            m[i]++;
        }
        for (auto &i : m)
        {
            string first = i.first;
            string t = first;
            reverse(t.begin(), t.end());
            if (first == t)
            {
                sol += i.second / 2;
                if (i.second % 2)
                {
                    isodd = true;
                }
            }
            else
            {
                if (m.count(t))
                {
                    sol += min(i.second, m[t]);
                    m.erase(t);
                }
            }
        }
        sol *= 4;
        if (isodd)
        {
            sol += 2;
        }
        return sol;
    }
};
int main()
{

    return 0;
}