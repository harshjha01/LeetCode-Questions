#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size(), maxno = INT_MIN;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            maxno = max(maxno, nums[i]);
            if (nums[i] > 0)
            {
                m[i]++;
            }
        }
        for (int i = 1; i <= maxno; i++)
        {
            if (m.count(i) > 0)
            {
            }
            else
            {
                return i;
            }
        }
        return maxno + 1;
    }
};
int main()
{

    return 0;
}