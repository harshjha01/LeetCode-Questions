#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isHappy(int n)
    {
        int sum = 0;
        while (n != 1)
        {
            while (n)
            {
                int h = n % 10;
                sum = sum + (h * h);
                n = n / 10;
            }
            n = sum;
            if (n==89)
            {
               break;
            }
            
        }
        return n == 1;
    }
};
int main()
{

    return 0;
}