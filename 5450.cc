#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int v = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            v = v ^ nums[i];
        }
        return v;
    }
};
int main()
{

    return 0;
}