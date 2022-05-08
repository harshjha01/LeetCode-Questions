#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> sol;
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                pq.push({nums1[i] + nums2[j], {nums1[i], nums2[j]}});
            }
        }
        while (--k)
        {
            sol.push_back(pq.top().second);
            pq.pop();
        }
        return sol;
    }
};
class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        int n = nums1.size(), m = nums2.size();
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push({nums1[i] + nums2[0], {nums1[i], nums2[0], i, 0}});
        }
        vector<vector<int>> sol;
        while (!pq.empty() || k--)
        {
            vector<int> popped = pq.top().second;
            pq.pop();
            sol.push_back({popped[0], popped[1]});
            if (popped[3] < m - 1)
            {
                pq.push({nums1[popped[2] + 1] + nums2[popped[3] + 1], {nums1[popped[2] + 1], nums2[popped[3] + 1], popped[2] + 1, popped[3] + 1}});
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}