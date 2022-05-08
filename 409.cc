#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> m;
        int sol = 0;
        int odd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        for (auto i : m)
        {
            int temp = i.second;
            if (temp % 2 != 0)
            {
                sol += temp - 1;
                odd = 1;
            }
            else
            {
                sol += temp;
            }
        }
        return sol + odd;
    }
};
int main()
{

    return 0;
}