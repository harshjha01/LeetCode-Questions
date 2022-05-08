#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        unordered_set<int> s;
        vector<int> sol;
        int maxx = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            maxx = max(maxx, nums[i]);
            s.insert(nums[i]);
        }
        for (int i = 1; i <= maxx; i++)
        {
            if (s.find(i) == s.end())
            {
                sol.push_back(i);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}