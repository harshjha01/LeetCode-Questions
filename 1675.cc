#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        int miin = INT_MAX;
        int maax = INT_MIN, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 != 0)
            {
                nums[i] = nums[i] * 2;
            }
            miin = min(miin, nums[i]);
            maax = max(maax, nums[i]);
        }
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            q.push(nums[i]);
        }
        int sol = maax - miin;
        while (q.top() % 2 == 0)
        {
            int topelement = q.top();
            q.pop();
            topelement = topelement / 2;
            miin = min(miin, topelement);
            sol = min(sol, topelement - miin);
            q.push(topelement);
        }
        return sol;
    }
};
int main()
{

    return 0;
}