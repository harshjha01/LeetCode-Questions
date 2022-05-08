#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int a = 0, b = 0;
        if (nums.size() <= 3)
        {
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                sum = max(sum, nums[i]);
            }
            return sum;
        }
        else
        {
            if (nums.size() % 2 == 0)
            {
                int i = 0;
                while (nums.size() > i)
                {
                    a += nums[i];
                    i++;
                    b += nums[i];
                    i++;
                }
            }
            else
            {
                int c = max(nums[0], nums[nums.size() - 1]);
                if (c == nums[0])
                {
                    int i = 0;
                    while (nums.size() - 1 > i)
                    {
                        a += nums[i];
                        i++;
                        b += nums[i];
                        i++;
                    }
                }
                else
                {
                    int i = 1;
                    while (nums.size() > i)
                    {
                        a += nums[i];
                        i++;
                        b += nums[i];
                        i++;
                    }
                }
            }
        }
        return max(a, b);
    }
};
class Solution
{
public:
    int solver(vector<int> arr, bool firstcantaken, int n)
    {
        if (n < 0)
        {
            return 0;
        }
        
    }
    int rob(vector<int> &nums)
    {
    }
};
int main()
{

    return 0;
}