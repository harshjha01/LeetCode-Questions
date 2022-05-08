#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minSwaps(vector<int> &arr)
    {
        int totalnoof1 = 0;
        int consutive1 = 0;
        string nums;

        for (auto &i : arr)
        {
            nums.push_back(i);
        }
        nums += nums;
        for (auto &i : nums)
        {
            if (i == 1)
            {
                totalnoof1++;
            }
        }
        if (totalnoof1 == 0)
        {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                int temp = 0;
                while (nums[i] == 1)
                {
                    temp++;
                    i++;
                }
                consutive1 = max(consutive1, temp);
            }
        }
        totalnoof1 /= 2;
        if (totalnoof1 <= consutive1)
        {
            return 0;
        }

        return totalnoof1 - consutive1;
    }
};
int main()
{

    return 0;
}