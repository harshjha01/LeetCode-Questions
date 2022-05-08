#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> prefixsum;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            prefixsum.push_back(sum);
        }
        int sol = 0;
        sol += prefixsum[n];
        for (int i = 3; i <= n; i += 2)
        {
            bool isfirst = true;
            for (int j = i - 1; j < n; j++)
            {
                if (isfirst)
                {
                    sol += prefixsum[j];
                    isfirst = false;
                }
                else
                {
                    int temp = prefixsum[j] - prefixsum[j - i];
                    sol += temp;
                }
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}