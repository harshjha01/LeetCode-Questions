#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int threeSumMulti(vector<int> &arr, int target)
    {
        int sol = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                mp[arr[j]]--;
                if (mp.count(target - (arr[i] + arr[j])) > 0)
                {
                    sol += mp[target - (arr[i] + arr[j])];
                }
                mp[arr[j]]++;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}