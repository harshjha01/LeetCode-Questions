#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canfit(vector<int> arr, int k, int capasity)
    {
        int orizinal = 0;
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > capasity)
            {
                return false;
            }
            sum += arr[i];
            if (sum > capasity)
            {
                orizinal++;
                sum = arr[i];
            }
        }
        return orizinal <= k;
    }
    int splitArray(vector<int> &nums, int m)
    {
        int n = nums.size(), start = 0, end = 0;
        if (m > n)
        {
            return -1;
        }

        for (int i = 0; i < n; i++)
        {
            start = max(start, nums[i]);
            end += nums[i];
        }
        int sol = INT_MAX;
        while (start < end)
        {
            int mid = start + (end + start) / 2;
            if (canfit(nums, m, mid))
            {
                sol = min(sol, mid);
                end = mid - 1;
            }
            else
            {
                start = start + 1;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}