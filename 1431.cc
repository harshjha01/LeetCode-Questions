#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> sol;
       
        int a = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= a)
            {
                sol.push_back(true);
               
            }
            else
            {
                sol.push_back(false);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}