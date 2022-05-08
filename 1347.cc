#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minSteps(string s, string t)
    {
        unordered_map<char, int> harsh;
        for (auto i : s)
        {
            harsh[i]++;
        }
        for (auto i : t)
        {
            harsh[i]--;
        }
        int sol = 0;
        for (auto i : harsh)
        {
            sol = sol + abs(i.second);
        }
        return sol / 2;

        // int n = s.size();
        // int count = 0;
        // unordered_map<char, int> sstring;
        // unordered_map<char, int>::iterator itr = sstring.begin();
        // unordered_map<char, int> tstring;
        // unordered_map<char, int>::iterator ittr = tstring.begin();
        // itr->second;

        // for (auto z : s)
        // {
        //     sstring[z]++;
        // }
        // for (auto x : t)
        // {
        //     tstring[x]++;
        // }
        // int h = 0;
        // while (h < n)
        // {
        //     if ()
        //     {

        //     }

        //     h++;
        // }
    }
};
int main()
{

    return 0;
}