#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0 || nums.size() == 1)
        {
            return nums.size();
        }

        int sol = 1;
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int finder = nums[i] - 1;
            int temp = 0;
            if (s.find(finder) == s.end())
            {
                while (s.find(finder + 1) != s.end())
                {
                    temp++;
                    finder++;
                }
            }
            sol = max(sol, temp);
        }
        return sol;
    }
};
int main()
{

    return 0;
}