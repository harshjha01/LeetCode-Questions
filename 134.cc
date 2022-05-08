#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool trippossible(vector<int> gas, vector<int> cost, int n, int i)
    {
        int count = 0;
        int fuel = 0;
        while (count != n)
        {
            fuel += gas[i];
            fuel -= cost[i];
            if (fuel < 0)
            {
                return false;
            }
            else
            {
                count++;
                i = i + 1 % n;
            }
        }
        if (fuel < 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        for (int i = 0; i < n; i++)
        {
            if (gas[i] >= cost[i] && trippossible(gas, cost, n, i))
            {
                return i;
            }
        }
        return -1;
    }
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size(), ifpossible = 0, currfuel = 0, start = 0;
        for (int i = 0; i < n; i++)
        {
            ifpossible += gas[i] - cost[i];
            currfuel += gas[i] - cost[i];
            if (currfuel < 0)
            {
                currfuel = 0;
                start = i + 1;
            }
        }
        if (ifpossible < 0)
        {

            return -1;
        }
        return start;
    }
};
int main()
{

    return 0;
}