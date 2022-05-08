#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        //     int psize = p.size();
        //     int ssize = s.size();
        //     if (psize == 0 || ssize == 0)
        //     {
        //         return {};
        //     }
        //     unordered_map<char, int> mp;
        //     for (int i = 0; i < psize; i++)
        //     {
        //         mp[p[i]]++;
        //     }
        //     vector<int> sol;
        //     int k = mp.size(), mpsize = mp.size(), i = 0, j = 0;
        //     while (j < ssize)
        //     {
        //         if (mp.find(s[j]) != mp.end())
        //         {
        //             mp[s[j]]--;
        //             if (mp[s[j]] == 0)
        //             {
        //                 k--;
        //             }
        //         }
        //         if (j - i + 1 < mpsize)
        //         {
        //             j++;
        //         }
        //         else if (j - i + 1 == mpsize)
        //         {
        //             if (k == 0)
        //             {
        //                 sol.push_back(i);
        //             }
        //             if (mp.find(s[i]) != mp.end())
        //             {
        //                 mp[s[i]]++;
        //                 if (mp[s[i]] == 1)
        //                 {
        //                     k++;
        //                 }
        //                 i++;
        //                 j++;
        //             }
        //         }
        //     }
        //     return sol;
        // }
        vector<int> sol;
        unordered_map<char, int> m;
        for (int i = 0; i < p.size(); i++)
        {
            m[p[i]]++;
        }
        int i = 0, j = 0, k = m.size(), count = m.size();
        while (j < s.size())
        {
            if (m.find(s[j]) != m.end())
            {
                m[s[j]]--;
                if (m[s[j]] == 0)
                {
                    count--;
                }
            }
            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                if (count == 0)
                {
                    sol.push_back(i);
                }
                if (m.find(s[i]) != m.end())
                {
                    m[s[i]]++;
                    if (m[s[i]] == 1)
                        count++;
                }
                i++;
                j++;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}