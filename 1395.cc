#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        int n = rating.size();

        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (rating[i] < rating[j] && rating[j] < rating[k] || rating[i] > rating[j] && rating[j] > rating[k])
                    {
                        count++;
                    }
                }
            }
        }
        return count;
        // int i = 0, j = 1, k = 2;
        // for (i = 0; i < n; i++)
        // {
        //     if (rating[i]<rating[j]<rating[k] || rating[i]> rating[j]> rating[k])
        //     {
        //         sol.push_back(rating[i]);
        //         sol.push_back(rating[j]);
        //         sol.push_back(rating[k]);
        //     }
        // }
    }
};

int main()
{

    return 0;
}