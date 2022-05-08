#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        int index = 1;
        vector<int> person;
        for (int i = 1; i <= n; i++)
        {
            person.push_back(i);
        }
        k--;
        int ans = -1;
        solve(index, k, person, ans);
        return ans;
    }
    void solve(int index, int k, vector<int> person, int &ans)
    {
        if (person.size() == 1)
        {
            ans = person[0];
            return;
        }
        index = (index + k) % person.size();
        person.erase(person.begin() + index);
        solve(index, k, person, ans);
        return;
    }
};
int main()
{

    return 0;
}