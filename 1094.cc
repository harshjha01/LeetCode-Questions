#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        int sum = 0;
        int arr[1001];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < trips.size(); i++)
        {
            vector<int> temp = trips[i];
            int sawari = temp[0];
            int from = temp[1];
            int to = temp[2];
            arr[from] += sawari;
            arr[to] -= sawari;
        }
        for (auto i : arr)
        {
            sum += i;
            if (sum > capacity)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}