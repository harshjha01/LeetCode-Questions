#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0, n = nums.size();
        int mid = j;
        if (n % 2 == 0)
        {
            mid = n / 2;
        }
        else
        {
            mid = n / 2;
            mid++;
        }
        vector<int> sol;
        j = n - 1;
        i = mid - 1;
        while (true)
        {
            if (i < 0 && j == mid - 1)
            {
                break;
            }
            if (i < 0)
            {
                sol.push_back(nums[i]);
                i--;
            }

            if (j < mid - 1)
            {
                sol.push_back(nums[j]);
                j--;
            }
        }
        nums = sol;
    }
};
class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0, n = nums.size();
        if (n % 2 == 0)
        {
            j = n / 2;
        }
        else
        {
            j = n / 2;
            j++;
        }
        int mid = j;
        vector<int> sol;
        while (true)
        {
            if (i == mid && j == n)
            {
                break;
            }
            if (i < mid)
            {
                sol.push_back(nums[i]);
            }
            if (j < n)
            {
                sol.push_back(nums[j]);
            }
        }
        nums = sol;
    }
};
int main()
{

    return 0;
}