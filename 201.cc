#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        return 0;
    }
};
int main()
{
    int naya = 5;
    for (int i = 5 + 1; i < 7; i++)
    {
        naya = naya && i;
    }
    // naya = 0101 & 0110 & 0111;
    cout << naya;

    return 0;
}