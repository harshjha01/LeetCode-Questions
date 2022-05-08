#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxone = 0;
        int currmax = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                currmax++;
            }
            else
            {
                if (currmax > maxone)
                {
                    maxone = currmax;
                    currmax = 0;
                }
                currmax = 0;
            }
            if (currmax > maxone)
            {

                return currmax;
            }
            return maxone;
        }
    }
};
int main()
{

    return 0;
}