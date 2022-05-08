#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool findtotalnoofhours(vector<int> arr, int k, int n, int h)
    {
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            sol += (arr[i] / k);
            if (arr[i] % k)
            {
                sol++;
            }
        }
        return sol > h;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1, high = *max_element(piles.begin(), piles.end()), n = piles.size(), sol = high;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (findtotalnoofhours(piles, mid, n, h))
            {
                sol = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return sol;
    }
};
class Solution
{
public:
    int findtotalnoofhours(vector<int> arr, int k, int n)
    {
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            sol += (arr[i] / k);
            if (arr[i] % k)
            {
                sol++;
            }
        }
        return sol;
    }
    // int findtotalnoofhours(vector<int> arr, int k, int n)
    // {
    //     int sol = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         sol += ceil(arr[i] / k);
    //     }
    //     return sol;
    // }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1, high = INT_MIN, n = piles.size();
        if (n == h)
        {
            return h;
        }
        for (int i = 0; i < n; i++)
        {
            high = max(high, piles[i]);
        }
        int sol = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int temp = findtotalnoofhours(piles, mid, n);
            if (temp <= h)
            {
                sol = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}