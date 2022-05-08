#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to show the elements
// of the priority queue

class Solution
{
public:
    typedef pair<int, int> pd;
    struct myComp
    {
        constexpr bool operator()(
            pair<int, int> const &a,
            pair<int, int> const &b)
            const noexcept
        {
            return a.second < b.second;
        }
    };
    vector<int> showpq(priority_queue<pd, vector<pd>, myComp> g)
    {
        // Loop to print the elements
        // until the priority queue
        // is not empty
        vector<int> sol;
        while (!g.empty())
        {
            // cout << g.top().first
            //      << " " << g.top().second
            //      << endl;
            sol.push_back(g.top().first);
            g.pop();
        }
        // cout << endl;
        return sol;
    }
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        priority_queue<pd, vector<pd>, myComp> p;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            p.push(make_pair(i.first, i.second));
        }
        vector<int> sol = showpq(p);
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(sol[i]);
        }
        return ans;
    }
};

int main()
{
    for (int i = 0; i < 0; i++)
    {
        /* code */
    }
    
    return 0;
}