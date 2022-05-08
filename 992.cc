#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        int sol = 0;
        if (k == 0)
        {
            return sol;
        }
        int i = 0, j = 0, n = nums.size();
        unordered_map<int, int> m;
        while (j < n)
        {
            if (k > 0)
            {
                m[nums[j]]++;
                if (m[nums[j]] == 1)
                {
                    k--;
                }
            }
            else if (k == 0)
            {
                sol++;
            }
        }
    }
};
class Solution
{
public:
    int atmost(vector<int> arr, int k)
    {
        int i = 0, j = 0, sol = 0;
        unordered_map<int, int> m;
        while (j < arr.size())
        {
            m[arr[j]]++;
            while (m.size() > k)
            {
                m[arr[j]]--;
                if (m[arr[j]] == 0)
                {
                    m.erase(m.find(m[arr[j]]));
                }
                i++;
            }
            sol += (j - i + 1);
            j++;
        }
        return sol;
    }
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};
class Solution
{
public:
    int atmost(vector<int> arr, int k)
    {
        int i = 0, j = 0, sol = 0;
        unordered_map<int, int> m;
        while (j < arr.size())
        {
            m[arr[j]]++;
            while (m.size() > k)
            {
                auto it = m.find(m[arr[i]]);
                it->second--;
                if (it->first == 0)
                {
                    m.erase(it);
                }
                i++;
            }
            sol += (j - i + 1);
            j++;
        }
        return sol;
    }
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};
int main()
{

    return 0;
}