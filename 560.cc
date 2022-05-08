#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
       int sol = 0;
        int sum = 0;
        vector<int> prefixsum;
        unordered_map<int, int> m;
        m[0]++;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            
            if (m.find(sum - k) != m.end())
            {
                sol += m[sum - k];
            }
            m[sum]++;
        }
        return sol;
    }
};
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int sol = 0;
        int sum = 0;
        int n = nums.size(), i = 0, j = 0;
        while (j <= n)
        {
            sum += nums[j];
            if (sum < k)
            {
                j++;
            }
            else if (sum == k)
            {
                sol++;
                j++;
            }
            else
            {
                while (sum > k)
                {
                    sum -= nums[i];
                    i++;
                }
                if (sum < k)
                {
                    j++;
                }
                else if (sum == k)
                {
                    sol++;
                    j++;
                }
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}