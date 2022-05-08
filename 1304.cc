#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        int j = n;
        int k = n;
        vector<int> ans;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                ans.push_back(j);
                j--;
            }
            ans.push_back(0);
            for (int i = 0; i < n / 2; i++)
            {
                ans.push_back(-1 * k);
                k--;
            }
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                ans.push_back(j);
                j--;
            }

            for (int i = 0; i < n / 2; i++)
            {
                ans.push_back(-1 * k);
                k--;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}