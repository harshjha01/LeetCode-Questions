#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        vector<int> sol;
        for (auto i : nums1)
        {
            m[i]++;
        }
        for (auto i : nums2)
        {
            if (m.find(i) != m.end())
            {
                sol.push_back(i);
                m[i]--;
            }
            if (m[i] == 0)
            {
                m.erase(i);
            }
        }
        return sol;
        // vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
        // {
        //     vector<int> result;
        //     unordered_map<int, int> m;

        //     for (auto i : nums1)
        //     {
        //         m[i]++;
        //     }
        //     for (auto i : nums2)
        //     {
        //         if (m.find(i) != m.end())
        //         {
        //             result.push_back(i);
        //             m[i]--;
        //         }
        //         if (m[i] == 0)
        //         {
        //             m.erase(i);
        //         }
        //     }
        //     return result;
        // for (int i = 0; i < nums2.size(); i++)
        // {
        //     if (m.find(nums2[i]) != m.end())
        //     {
        //         result.push_back(nums2[i]);
        //         m[nums2[i]]--;
        //     }
        //     if (m[nums2[i]] == 0)
        //     {
        //         m.erase(nums2[i]);
        //     }
        // }
        // return result;

        // for (int i : nums2)
        // {
        //     if (m[i] == 1)
        //     {
        //         result.push_back(i);
        //     }
        // }
        // return result;
    }
};
int main()
{

    return 0;
}