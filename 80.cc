#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        int sol = 0;
        for (auto i : m)
        {
            if (i.second <= 2)
            {

                // auto itr = m.find(i.first);
                // m.erase(itr);

                m[i.first] = 0;
            }
            else
            {
                m[i.first] = i.second - 2;
                // sol += i.second - 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (m[nums[i]] == 0)
            {
                if (nums[i] == nums[i + 1])
                {
                    i++;
                    i++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                int toerase = m[nums[i]];
                nums.erase(nums.begin() + i, nums.begin() + i + toerase);
                i++;
            }
        }

        return nums.size();
    }
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
        {
            return n;
        }
        int i = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        while (i < nums.size() - 2)
        {
            if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2])
            {
                nums.erase(nums.begin() + i);
            }
        }

        return nums.size();
    }
};
int main()
{

    return 0;
}