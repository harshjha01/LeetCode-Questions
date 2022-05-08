#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> subarr(int i, int j, vector<int> arr)
    {
        vector<int> sol;
        for (int s = i; s <= j; s++)
        {
            sol.push_back(arr[s]);
        }
        return sol;
    }

    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        set<vector<int>> s;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < k)
            {
                s.insert({nums[i]});
            }
        }
        int sum = 1, i = 0, j = 0;
        while (j < n)
        {
            sum *= nums[j];
            if (sum < k)
            {
                s.insert(subarr(i, j, nums));
                j++;
            }
            if (nums[i] >= k)
            {
                j++;
                continue;
            }
            else
            {
                while (sum >= k)
                {
                    sum /= nums[i];
                    i++;
                }
            }
        }
        return s.size();
    }
};
int main()
{

    return 0;
}