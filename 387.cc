#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        queue<char> q;
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
            q.push(s[i]);
        }
        for (auto &i : m)
        {
            if (i.second != 1)
            {
                m.erase(i.first);
            }
        }
        while (!q.empty())
        {
            char chu = q.front();
            q.pop();
            auto itr = m.find(chu);
            if (itr != m.end())
            {
                return chu;
            }
        }
        
    }
};
// class Solution
// {
// public:
//     int firstUniqChar(string s)
//     {
//         map<char, pair<int, int>> m;
//         int sol = -1;
//         for (int i = 0; i < s.size(); i++)
//         {
//             m[s[i]].second++;
//             m[s[i]].first = i;
//         }
//         for (auto i : m)
//         {
//             if (i.second.second == 1)
//             {
//                 sol = i.second.first;
//                 break;
//             }
//         }
//         return sol;
//     }
// };
int main()
{

    return 0;
}