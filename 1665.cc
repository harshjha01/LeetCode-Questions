#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        int n = nums.size(), maax = INT_MAX, miin = INT_MIN;
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 != 0)
            {
                nums[i] = nums[i] * 2;
            }
            maax = max(maax, nums[i]);
            miin = min(miin, nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            q.push(nums[i]);
        }
        int sol = maax - miin;
        while ((q.top()) % 2 == 0)
        {
            int topper = q.top();
            q.pop();
            sol = min(sol, topper - miin);
            topper = topper / 2;
            miin = min(miin, topper);
            q.push(topper);
        }
        sol = min(sol, q.top() - miin);
        return sol;
    }
};
int main()
{

    return 0;
}