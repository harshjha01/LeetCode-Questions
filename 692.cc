#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        priority_queue<pair<int, string>> q;
        unordered_map<string, int> m;
        vector<string> sol;
        for (int i = 0; i < words.size(); i++)
        {
            m[words[i]]++;
        }
        for (auto i : m)
        {
            q.push(make_pair(i.second, i.first));
        }
        unordered_set<string> s;
        while (k)
        {
            auto i = q.top();
            // sol.push_back(i.second);
            s.insert(i.second);
            q.pop();
            k--;
        }
        for (int i = 0; i < words.size(); i++)
        {
            if (s.find(words[i]) != s.end())
            {
                sol.push_back(words[i]);
                s.erase(words[i]);
            }
        }

        return sol;
    }
};
int main()
{

    return 0;
}