#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    int findGCD(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[nums.size() - 1]);
    }
};
int main()
{

    return 0;
}