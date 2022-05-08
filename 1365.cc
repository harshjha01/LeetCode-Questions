#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int count = 0;
        vector<int> harsh;
        for (int i = 0; i < nums.size(); i++)
        {
            count = 0;

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                {
                    count++;
                }
            }
            harsh.push_back(count);
        }
        return harsh;
    }
};
int main()
{

    return 0;
}