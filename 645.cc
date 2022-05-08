#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        unordered_map<int, int> m;
        vector<int> sol;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (m.count(i) != 0)
            {
                if (m[i] == 2)
                {
                    sol.push_back(i);
                }
            }
            else
            {
                sol.push_back(i);
            }
        }
        return sol;
    }
    vector<int> findErrorNums(vector<int> &nums)
    {
        int pf = 0, n = nums.size(), sum = 0, fori = 0;
        vector<int> sol;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            pf += nums[i];
            sum += i;
            if (nums[i] == nums[i + 1])
            {
                sol.push_back(nums[i]);
            }
            fori = i;
        }
        sum += fori + 1;
        sum += fori + 2;
        pf += nums[n - 1];
        pf -= 2 * sol[0];
        sol.push_back(sum - pf - sol[0]);
        return sol;
    }
};
int main()
{

    return 0;
}