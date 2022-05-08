#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        int n = low;
        int lowsize = 0;
        while (n)
        {
            lowsize++;
            n = n / 10;
        }
        string firststr = "";
        int i = 1;
        for (i; i < lowsize + 1; i++)
        {
            firststr.push_back(i);
        }
        if (high < stoi(firststr))
        {
            return {};
        }
        vector<int> sol;
        sol.push_back(stoi(firststr));
        bool cango = true;
        while (cango)
        {

            firststr.erase(0, 1);
            firststr.push_back(i);
            if (high < stoi(firststr))
            {
                cango = false;
            }
            else
            {
                sol.push_back(stoi(firststr));
                i++;
            }
        }
        return sol;
    }
};
int main()
{
    
    return 0;
}