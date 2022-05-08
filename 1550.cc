#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isodd(int i)
    {
        if (i % 2 == 0)
        {
            return false;
        }
        return true;
    }
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int key = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (isodd(arr[i]))
            {
                key++;
                if (key >= 3)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}