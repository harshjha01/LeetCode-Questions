#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int freqelement(unordered_map<char, int> mp)
    {
        int maxm = INT_MIN;
        for (auto i : mp)
        {
            maxm = max(i.second, maxm);
        }
    }
    int characterReplacement(string s, int k)
    {

        // A A B A B B A
        // 1 2 2 3 3 3 4
        // 0 0 1 1 2 3 3

        // A A B A B B A
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int sol = 0, n = s.size();
        while (j < n)
        {
            mp[s[j]]++;
            if (j - i + 1 - freqelement(mp) > k)
            {
                while (j - i + 1 - freqelement(mp) > k)
                {
                    mp[s[i]]--;
                    i++;
                }
            }
            sol = max(sol, j - i + 1);
        }
        return sol;
    }
};
int main()
{

    return 0;
}