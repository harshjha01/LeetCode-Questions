#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n < 9 || n != 3 &&n!=6)
        {
          return false;
        }

        while (n != 1)
        {
            if (n % 3 != 0)
            {
                return false;
            }
            n = n / 3;
        }
        return true;

        // while (n ==1)
        // {
        //     if (n % 3 == 1)
        //     {
        //         count++;
        //     }
        //     n = n / 3;
        // }
        // if (count == 1)
        // {
        //     return true;
        // }

        // return false;
    }
};

int main()
{

    return 0;
}