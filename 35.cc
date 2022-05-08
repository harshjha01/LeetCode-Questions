#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        // int i = 0, j = nums.size() - 1;
        // if (target < nums[i])
        // {
        //     return 0;
        // }
        // if (target > nums[j])
        // {
        //     return j + 1;
        // }

        // while (i <= j)
        // {
        //     if (nums[i] == target)
        //     {
        //         return i;
        //     }
        //     if (nums[j] == target)
        //     {
        //         return j;
        //     }
        //     if (target < nums[i + 1] && target > nums[i])
        //     {
        //         return i + 1;
        //     }
        //     if (target > nums[j - 1] && target < nums[j])
        //     {
        //         return j - 1;
        //     }
        //     i++;
        //     j--;
        // }
        // return 0;
        int start = 0;
        int end = nums.size() - 1;
        int sol = -1;
        while (start <= end)
        {
            int mid = start + end - start / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                sol = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}