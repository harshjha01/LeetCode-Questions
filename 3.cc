#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i = 0, j = 0;
        int n = s.size();
        int sol = 0;
        unordered_map<char, int> m;
        while (j < n)
        {
            m[s[j]]++;
            if (m.size() == j - i + 1)
            {
                sol = max(sol, j - i + 1);
            }
            else
            {
                while (m.size() != j - i + 1)
                {
                    m[s[i]]--;
                    if (m[s[i]] == 0)
                    {
                        m.erase(m[s[i]]);
                    }
                    i++;
                }
            }
            return sol;
        }
    }
};
int main()
{

    return 0;
}