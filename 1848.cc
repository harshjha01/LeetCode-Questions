#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                index = i;
                break;
            }
        }
        return abs(index - start);
    }
};
int main()
{

    return 0;
}