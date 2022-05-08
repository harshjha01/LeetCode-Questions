#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {
// public:
//     int numberOfSubstrings(string s)
//     {
//         int i = 0, j = 0, sol = 0, n = s.size();
//         map<char, int> mp;
//         while (j < n)
//         {
//             mp[s[j]]++;
//             if (mp.size() < 3)
//             {
//                 j++;
//             }
//             if (mp.size() == 3)
//             {
//                 sol++;
//                 j++;
//             }
//             if (j == n)
//             {

//                 while (mp.size() < 3)
//                 {
//                     mp[s[i]]--;
//                     if (mp[s[i]] == 0)
//                     {
//                         mp.erase(s[i]);
//                     }
//                     sol++;
//                     i++;
//                 }
//             }
//         }
//         return sol;
//     }
// };
int numberOfSubstrings(string s)
{
    int i = 0, j = 0, sol = 0, n = s.size();
    map<char, int> mp;
    while (j < n)
    {
        mp[s[j]]++;
        while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0)
        {
            sol += (n - j);
            mp[s[i]]--;
            i++;
        }
        j++;
    }
}
int numberOfSubstrings(string s)
{
    int i = 0, j = 0, sol = 0, n = s.size();
    map<char, int> mp;
    while (j < n)
    {
        mp[s[j]]++;
        if (mp.size() < 3)
        {
            j++;
        }
        if (j == n)
        {
            while (mp.size() < 3)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                sol++;
                i++;
            }
        }
        if (mp.size() == 3)
        {
            sol++;
            j++;
        }
    }
    return sol;
}
int main()
{

    return 0;
}