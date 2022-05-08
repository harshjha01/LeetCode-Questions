#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    long long int VectorToInt(vector<int> v)
    {
        reverse(v.begin(), v.end());
        long long int decimal = 1;
        long long int total = 0;
        for (auto &it : v)
        {
            total += it * decimal;
            decimal *= 10;
        }
        return total;
    }
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> sol;
        long long int a = VectorToInt(num);
        a += k;
        while (a > 0)
        {
            int h = a % 10;

            sol.push_back(h);
            a = a / 10;
        }
        return sol;
    }
};
int main()
{

    return 0;
}