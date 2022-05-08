#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minDeletions(string s)
    {
        int sol = 0, n = s.size();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto i : mp)
        {
            pq.push({i.second, i.first});
        }
        int lastnodigit = -1;
        while (!pq.empty())
        {
            if (lastnodigit == -1)
            {
                pq.pop();
            }
            else if (pq.top().first != lastnodigit)
            {
                lastnodigit = pq.top().first;
                pq.pop();
            }
            else if (pq.top().first == lastnodigit)
            {
                sol++;
                auto temp = pq.top();
                pq.pop();
                pq.push({temp.first--, temp.second});
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}