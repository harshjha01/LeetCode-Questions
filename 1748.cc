#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> hh;
        int sum = 0;
        for (auto i = 0; i < nums.size(); i++)
        {
            hh[nums[i]]++;
        }
        for (auto i = 0; i < hh.size(); i++)
        {
            if (hh[i] == 1)
            {
                sum = sum + i;
            }
        }
        return sum;
    }
};

int main()
{

    return 0;
}