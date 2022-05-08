#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int brokenCalc(int startValue, int target)
    {
        int sol = 0;
        if (startValue > target)
        {
            return startValue - target;
        }

        while (target != startValue)
        {
            sol++;
            target = target / 2;
            if (startValue == target - 1)
            {
                sol++;
                break;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}