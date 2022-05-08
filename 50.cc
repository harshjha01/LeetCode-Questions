#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        
        return myPow(x, n - 1);
    }
};
int main()
{

    return 0;
}