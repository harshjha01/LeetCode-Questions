#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int givensum(vector<int> nums, int k)
    {
        unordered_map<int> m;
        int sum = 0, sol = 0;
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
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[i] = 0;
            }
            else
            {
                nums[i] = 1;
            }
        }
        return givensum(nums, k);
    }
};
int main()
{

    return 0;
}