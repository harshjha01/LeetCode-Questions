#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &t)
    {
        for (int i = 0; i < t.size(); i++)
        {
            t[i] = t[i] % 60;
        }
        int sol = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < t.size(); i++)
        {
            int temp = 60 - t[i];
            if (temp == 60)
            {
                if (m.find(0) != m.end())
                {
                    sol += m[0];
                }
            }
            else
            {
                if (m.find(temp) != m.end())
                {
                    sol += m[temp];
                }
            }
            m[t[i]]++;
        }
        return sol;
    }
};
int main()
{

    return 0;
}