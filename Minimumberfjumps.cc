#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minJumps(int arr[], int n)
    {

        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 0)
            {
                return -1;
            }
            sum++;
            i += arr[i];
        }
        return sum;
    }
};
int main()
{
    // int arr[] = {0, 4, 3, 2, 6, 7};
    // int n = 6;
    int n = 11;
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    Solution h;
    cout << h.minJumps(arr, n);

    return 0;
}