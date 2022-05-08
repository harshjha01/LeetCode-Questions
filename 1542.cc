#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool helper(string s)
    {
        unordered_map<char, int> m;
        int onlyoneodd = 1;
        for (auto i : s)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            if (i.second % 2 != 0)
            {
                onlyoneodd++;
            }
        }
        if (onlyoneodd > 1)
        {
            return false;
        }
        return true;
    }
    int longestAwesome(string s)
    {
        int sol = 0;
        string sol = "";
        for (int i = 0; i < s.size(); i++)
        {
            sol += s[i];
            
        }
    }
};
int main()
{

    return 0;
}