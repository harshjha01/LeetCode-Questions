#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int scounter = 0;
        int tcounter = 0;
        bool sol = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1] && t[i] == t[i + 1])
            {
                sol = true;
            }
            if (s[i] != s[i + 1] && t[i] != t[i + 1])
            {
                sol = true;
            }
            else
            {
                sol = false;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}