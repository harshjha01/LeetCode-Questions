#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++)
        {
            sol.insert(index[i] + sol.begin(), nums[i]);
        }
        return sol;
    }
};
int main()
{

    return 0;
}