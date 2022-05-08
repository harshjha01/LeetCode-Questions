#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i]) != s.end())
            {
                return false;
            }
            s.insert(nums[i]);
        }
        return true;
    }
};
int main()
{

    return 0;
}