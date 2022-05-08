#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    // void helperf(int num, vector<int> prev)
    // {
    //     if (num == 1 || num == 2)
    //     {
    //         vector<int> temp;
    //         for (int i = 0; i < num; i++)
    //         {
    //             temp.push_back(1);
    //         }
    //         sol.push_back(temp);
    //         return;
    //     }
    //}
    vector<vector<int>> generate(int num)
    {
        vector<vector<int>> sol;
        if (num == 1)
        {
            sol.push_back({1});
            return sol;
        }

        if (num == 2)
        {
            sol = generate(1);
            sol.push_back({1, 1});
            return sol;
        }
        sol = generate(num - 1);
        vector<int> v2{1};
        for (int i = 0; i < num - 2; i++)
        {
            v2.push_back(sol[num - 2][i] + sol[num - 2][i + 1]);
        }
        v2.push_back(1);
        sol.push_back(v2);
        return sol;
    }
};
int main()
{

    return 0;
}