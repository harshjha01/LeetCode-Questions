#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findMaximumXOR(vector<int> &arr)
    {
        int n = arr.size();
        int maxXor = 0;

        // Calculating xor of each pair
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                maxXor = max(maxXor,
                             arr[i] ^ arr[j]);
            }
        }
        return maxXor;
    }
};
int main()
{

    return 0;
}