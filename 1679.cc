#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int sol = 0, n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (m[k - nums[i]] > 0)
            {
                m[k - nums[i]]--;
                sol++;
            }
            m[nums[i]]++;
        }
        return sol;
    }
};
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1, sol = 0;
        while (i < j)
        {
            if (nums[i] + nums[j] == k)
            {
                sol++;
                i++, j--;
            }
            else if (nums[i] + nums[j] < k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}