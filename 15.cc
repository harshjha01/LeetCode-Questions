#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3)
        {
            return {};
        }
        if (nums[0] > 0)
        {
            return {};
        }
        unordered_map<int, int> m;
        set<vector<int>> ss;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            // m.insert({nums[i], i});
            m[nums[i]]++;
        }
        for (int i = 0; i < n - 1; i++)
        {
            m[nums[i]]--;
            for (int j = i + 1; j < n; j++)
            {
                m[nums[j]]--;
                auto it = m.find(nums[i] + nums[j] * -1);
                if (it != m.end() && it->second != 0)
                {
                    vector<int> temp = {nums[i], nums[j], it->first};
                    ss.insert(temp);
                }
                m[nums[j]]++;
            }
            m[nums[i]]++;
        }
        for (auto &i : ss)
        {
            sol.push_back(i);
        }
        return sol;
    }
};
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {

        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
                {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }

        return count >= n;
    }
};
int main()
{

    return 0;
}