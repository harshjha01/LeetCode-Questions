#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> circle(vector<int> &arr)
    {
        for (int i = 1; i < arr.size() - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
        }
        return arr;
    }
    int getWinner(vector<int> &arr, int k)
    {
        int winner = 0;
        int pervelement = 0;
        while (winner == k)
        {
            if (arr[0] < arr[1])
            {
                if (pervelement == arr[1])
                {
                    winner++;
                }
                else
                {
                    winner = 1;
                }
                swap(arr[0], arr[1]);
                arr = circle(arr);
            }
            if (arr[0] > arr[1])
            {
                if (pervelement == arr[0])
                {
                    winner++;
                }
                else
                {
                    winner = 1;
                }

                arr = circle(arr);
            }
            pervelement = arr[0];
        }
        return arr[0];
    }
};
int main()
{

    return 0;
}