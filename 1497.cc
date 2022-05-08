#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        bool sol = true;
        for (int i = 0; i < n - 1; i++)
        {
            int start = i, end = n - 1, size = arr.size();
            while (start < end)
            {
                if (arr[start] + arr[end] == k)
                {
                    arr.erase(arr.begin() + start);
                    arr.erase(arr.begin() + end);
                    continue;
                }
                else if (arr[start] + arr[end] > k)
                {
                    end--;
                }
                else if (arr[start] + arr[end] < k)
                {
                    start++;
                }
            }
            if (arr.size() == size)
            {
                sol = false;
                break;
            }
        }
        return sol;
    }
};
class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        bool sol = true;
        while (true)
        {
            int start = 0, end = arr.size() - 1, size = arr.size();
            while (start < end)
            {
                if (arr[start] + arr[end] == k)
                {
                    arr.erase(arr.begin() + start);
                    arr.erase(arr.begin() + end);
                    continue;
                }
                else if (arr[start] + arr[end] > k)
                {
                    end--;
                }
                else if (arr[start] + arr[end] < k)
                {
                    start++;
                }
            }
            if (arr.size() == size)
            {
                sol = false;
                break;
            }
        }
        return sol;
    }
};
class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[(arr[i]) % k]++;
        }

        for (auto i : arr)
        {

            int rem = i % k;
            if (rem == 0)
            {
                if (mp[rem] % 2 == 1)
                {
                    return false;
                }
            }
            else if (k % 2 == 0 and 2 * rem == k)
            {
                if (mp[rem] % 2 == 1)
                {
                    return false;
                }
            }
            else
            {
                if (mp[rem] != mp[k - rem])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}