#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void printarr(vector<int> arr)
    {
        for (auto i : arr)
        {
            cout << i << " ";
        }
    }
    int addRungs(vector<int> &v, int dist)
    {

        int curr = 0, sol = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sol = (v[i] - curr) / dist;
        }
        return sol;
    }
};
int main()
{

    return 0;
}