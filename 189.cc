#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        while (k)
        {
            int temp = nums[n - 1];
            nums.pop_back();
            nums.insert(nums.begin(), temp);
            k--;
        }
    }
};
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        auto it = nums.begin();
        reverse(it, it + k);
        reverse(it + k + 1, nums.end());
    }
};
int main()
{

    return 0;
}