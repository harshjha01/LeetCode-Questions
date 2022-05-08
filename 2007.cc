#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        unordered_map<int, int> m;
        vector<int> sol;
        for (auto &i : changed)
        {
            m[i]++;
        }
        int n = changed.size();
        sort(changed.begin(), changed.end());
        for (int i = 0; i < n; i++)
        {
            if (m.find(changed[i] * 2) != m.end() && m.find(changed[i]) != m.end())
            {
                sol.push_back(changed[i]);
                m.erase(changed[i]);
                m.erase(changed[i] * 2);
            }
        }
        if (sol.size() == n / 2)
        {
            return sol;
        }

        return {};
    }
    class Solutionn
    {
    public:
        vector<int> findOriginalArray(vector<int> &changed)
        {
            unordered_map<int, int> m;
            vector<int> sol;
            for (auto &i : changed)
            {
                m[i]++;
            }
            int n = changed.size();
            // sort(changed.begin(), changed.end());
            for (int i = 0; i < n; i++)
            {
                // if (m.find(changed[i] * 2) != m.end() && m[changed[i]] != 0 && m[changed[i * 2]] != 0)
                // if (m.find(changed[i]) != m.end() && m.find(changed[i] * 2) != m.end())
                if (m[changed[i]] > 0 && m.find(changed[i] * 2) != m.end() && m[changed[i] * 2] > 0)
                {
                    m[changed[i]]--;
                    m[changed[i] * 2]--;
                    sol.push_back(changed[i]);
                }
            }
            if (sol.size() == n / 2)
            {
                return sol;
            }
            else
            {
                return {};
            }
        }
    };
    // vector<int> findOriginalArray(vector<int> &changed)
    // {
    //     unordered_map<int, int> m;
    //     vector<int> sol;
    //     for (auto &i : changed)
    //     {
    //         m[i]++;
    //     }
    //     int n = changed.size();
    //     sort(changed.begin(), changed.end());
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (m.find(changed[i] * 2) != m.end() && m.find(changed[i]) != m.end())
    //         {
    //             sol.push_back(changed[i] );
    //             m.erase(changed[i]);
    //             m.erase(changed[i] * 2);
    //         }
    //     }
    //     if (sol.size() == n / 2)
    //     {
    //         return sol;
    //     }

    //     return {};
    // }
};
int main()
{

    return 0;
}