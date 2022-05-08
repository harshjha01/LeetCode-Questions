#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(nums[i]) != m.end())
            {
                if (abs(i + 1 - m[nums[i]]) <= k)
                {
                    return true;
                }
                else
                {
                    m[nums[i]] = i + 1;
                }
            }
            else
            {
                m[nums[i]] = i + 1;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}