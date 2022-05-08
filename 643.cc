#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int i = 0, j = 0;
        double sol = INT_MIN;
        double sum = INT_MIN;
        while (j < nums.size())
        {
            sum += nums[j];
            if (j - i + 1 < k)
            {
                j++;
            }
            if (j - i + 1 == k)
            {

                sol = max((sum / k), sol);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}