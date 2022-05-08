#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {

        int count = 0;
        int i = 1;
        while ((n - i) > 0)
        {
            count++;
            n = n - i;
            i++;
        }
        return count;
    }
};

int main()
{

    return 0;
}