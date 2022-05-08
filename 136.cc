#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res;
        for (int i = 0; i < nums.size(); i++)
        {
           res=res^nums[i];
        }
        return res;
    }
};
int main()
{

    return 0;
}