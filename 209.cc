#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int sum = 0, n = nums.size(), i = 0, j = 0, ans = INT_MAX;
        while (j < n)
        {
            sum += nums[j];
            if (sum < target)
            {
                j++;
            }
            else if (sum >= target)
            {

                while (sum >= target)
                {
                    if (ans != 0)
                    {
                        ans = min(j - i + 1, ans);
                    }
                    else
                    {
                        ans = j - i + 1;
                    }

                    sum -= nums[i];
                    i++;
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}