#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        vector<int> sol;
        sol = nums;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                sol[i + 1] += sol[i];
            }
            sort(sol.begin(), sol.end());
            return sol[sol.size() - 1];
        }

        // int maxAscendingSum(vector<int> &nums)
        // {
        //     if (nums.size() < 1)
        //     {
        //         return nums[0];
        //     }

        //     int count = 0;
        //     // priority_queue<int> q;
        //     vector<int> q;
        //     for (int i = 0; i < nums.size(); i++)
        //     {

        //         if (nums[i] > nums[i + 1])
        //         {
        //             count += nums[i];
        //         }
        //         else
        //         {
        //             q.push_back(count);
        //             count = 0;
        //         }
        //     }
        //     return *max_element(q.begin(), q.end());
        // if (nums.size() < 1)
        // {
        //     return nums[0];
        // }

        // int count = 0;
        // priority_queue<int> q;
        // for (int i = 0; i < nums.size(); i++)
        // {

        //     if (nums[i] > nums[i + 1])
        //     {
        //         count += nums[i];
        //     }
        //     else
        //     {
        //         q.push(count);
        //         count = 0;
        //     }
        // }
        // return q.top();
    }
};
int main()
{

    return 0;
}