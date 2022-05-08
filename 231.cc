#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int count = 1;
        if (n == 1)
        {
            return true;
        }
        while (count <= n)
        {
            count *= 2;
        }
        if (count == n)
        {
            return true;
        }
        return false;
    }
    // bool isPowerOfTwo(int n)
    // {
    //     int count = 0;
    //     while (n < 0)
    //     {
    //         if (n % 2 == 1)
    //         {
    //             count++;
    //         }
    //         n = n / 2;
    //     }
    //     if (count == 1)
    //     {
    //         return true;
    //     }
    //     else
    //     return false;
    // }
    // if (n == 1)
    // {
    //     return false;
    // }
    // count++;
    // isPowerOfTwo(n / 2);
};
int main()
{

    return 0;
}