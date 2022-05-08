#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int sum = 0, sol = INT_MIN, i = 0, j = 0;
        set<int> s;
        while (j < nums.size())
        {
            if (s.count(nums[j]) > 0)
            {
                while (nums[i] != nums[j])
                {
                    sum -= nums[i];
                    i++;
                }
            }
            s.insert(nums[j]);
            sum += nums[j];
            sol = max(sol, sum);
        }
        return sol;
    }
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int sum = 0, sol = INT_MIN, i = 0, j = 0;
        unordered_map<int, int> m;
        while (j < nums.size())
        {
            sum += nums[j];
            m[nums[j]]++;
            while (m[nums[j]] > 1)
            {
                sum -= nums[i];
                m[nums[i]]--;
                i++;
            }
            sol = max(sol, sum);
        }
        return sol;
    }
};
int main()
{

    return 0;
}