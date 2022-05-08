#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int n = flowerbed.size();
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (flowerbed[i + 1] == 0 && flowerbed[i] == 0)
                {
                    n--;
                }
            }
            if (i == n - 1)
            {
                if (flowerbed[i - 1] == 0 && flowerbed[i] == 0)
                {
                    n--;
                }
            }
            else if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                n--;
            }
        }
        if (n <= 0)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}