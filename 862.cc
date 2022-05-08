#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int shortestSubarray(vector<int> &nums, int k)
    {
        vector<int> psum;
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            psum.push_back(sum);
        }
        int i = 0, j = 0;
        sum = 0;
        while (j < n)
        {
            sum += nums[j];
            
        }
    }
};
int main()
{

    return 0;
}