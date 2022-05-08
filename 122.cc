#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int profit = 0, buy = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            profit += max(arr[i] - arr[i - 1], 0);
        }
        return profit;
    }
};
int main()
{

    return 0;
}