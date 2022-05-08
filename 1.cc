#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++)
        {
            auto fnd = m.find(target - nums[i]);
            if (fnd != m.end() && fnd->second != i)
            {
                sol.push_back(i);
                sol.push_back(fnd->second);
                break;
            }
            m.insert({nums[i], i});
        }
        return sol;
    }
};
int main()
{

    return 0;
}