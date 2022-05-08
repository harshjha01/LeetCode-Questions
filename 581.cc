#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int i = 0, j = nums.size() - 1;
        int first = -1, sec = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != temp[i] && first == -1)
            {
                first = i;
            }
            else if (nums[i] != temp[i])
            {
                sec = i;
            }
        }
        if (first == sec)
        {
            return 0;
        }

        else
        {
            return sec - first + 1;
        }
    }
};
int main()
{

    return 0;
}