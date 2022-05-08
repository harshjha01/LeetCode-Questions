#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end());
        int sol = 0, n = people.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            int sum = people[left] + people[right];
            if (sum <= limit)
            {
                sol++;
                left++;
                right--;
            }
            else
            {
                right--;
                sol++;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}