#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // [-2,1,-3,4,-1,2,1,-5,4]
        
        int curr = 0;
        int max = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            curr = curr + nums[i];
            if (max < curr)
            {
                max = curr;
            }
            if (curr < 0)
            {
                curr = 0;
            }
        }
        return max;
    }
};
int main()
{

    return 0;
}