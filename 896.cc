#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return true;
        }
        vector<int> num;
        vector<int> numss;
        num = nums;
        numss = nums;
        sort(num.begin(), num.end());
        sort(numss.begin(), numss.end());
        reverse(numss.begin(), numss.end());
        if (num == nums || num == numss)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}