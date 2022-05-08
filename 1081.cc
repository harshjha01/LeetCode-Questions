#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string smallestSubsequence(string s)
    {
        unordered_map<char, int> mp;
        int n = s.size(), k = 0;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        k = mp.size();
        
    }
};
int main()
{

    return 0;
}