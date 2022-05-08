#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    double average(vector<int> &salary)
    {
        sort(salary.begin(), salary.end());
        salary.erase(salary.begin() + 0);
        salary.erase(salary.begin() + salary.size() - 1);
        double sol = 0;
        for (int i = 0; i < salary.size(); i++)
        {
            sol = sol + salary[i];
        }
        sol = sol / salary.size();

        return sol;
    }
};
int main()
{

    return 0;
}
