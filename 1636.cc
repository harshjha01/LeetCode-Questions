#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        vector<int> sol;
        // priority_queue<pair<int, int>> pq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        unordered_map<int, int> m;
        for (auto &i : nums)
        {
            m[i]++;
        }
        for (auto &i : m)
        {
            pq.push({i.second, i.first});
        }
        while (!pq.empty())
        {
            pair<int, int> t;
            t = pq.top();
            pq.pop();
            int freq = t.first;
            int no = t.second;
            while (freq)
            {
                sol.push_back(no);
                freq--;
            }
        }

        return sol;
    }
};
int main()
{

    return 0;
}