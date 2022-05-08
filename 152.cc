#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int helper(vector<int> arr, int n)
    {
        if (n < 0)
        {
            return 1;
        }
        return max(arr[n] * helper(arr, n - 1), helper(arr, n - 1));
    }
    int maxProduct(vector<int> &nums)
    {
        return helper(nums, nums.size() - 1);
    }
};
int main()
{

    return 0;
}