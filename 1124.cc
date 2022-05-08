#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestWPI(vector<int> &hours)
    {
        int n = hours.size();
        int sum = 0, sol = 0;
        for (int i = 0; i < n; i++)
        {
            if (hours[i] > 9)
            {
                hours[i] = 1;
            }
            else
            {
                hours[i] = -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += hours[i];
            hours[i] = sum;
        }
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (hours[i] > 0)
            {
                sol = max(sol, i + 1);
            }
            else
            {
                if (m.find(hours[i] - 1) != m.end())
                {
                    sol = max(sol, i - m[hours[i] - 1]);
                }
                else if (m.find(hours[i]) == m.end())
                {
                    m.insert({hours[i], i});
                }
            }
        }
        return sol;

        // code
        int i;
        int n = hours.size(), sum = 0, ans = 0;
        for (i = 0; i < n; i++)
        {
            if (hours[i] <= 8)
            {
                hours[i] = -1;
            }
            if (hours[i] > 8)
            {
                hours[i] = 1;
            }
        }
        unordered_map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            sum = sum + hours[i];
            hours[i] = sum;
        }

        for (i = 0; i < n; i++)
        {
            if (hours[i] > 0)
            {
                ans = max(ans, i + 1);
            }
            if (hours[i] <= 0)
            {

                if (mp.find(hours[i] - 1) != mp.end())
                {
                    ans = max(ans, i - mp[hours[i] - 1]);
                }
                if (mp.find(hours[i]) == mp.end())
                {
                    mp.insert({hours[i], i});
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}