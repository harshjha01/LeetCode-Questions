#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void subset(vector<vector<int>> &sol, vector<int> in, vector<int> op, int i, int n)
    {
        if (i == n)
        {
            if (op.size() > 1)
            {
                sol.push_back(op);
            }

            return;
        }
        subset(sol, in, op, i + 1, n);
        op.push_back(in[i]);
        subset(sol, in, op, i + 1, n);
        op.pop_back();
    }
    long long subArrayRanges(vector<int> &A)
    {
        vector<vector<int>> sol;
        vector<int> op;
        long long sum = 0;
        subset(sol, A, op, 0, A.size());
        for (int i = 0; i < sol.size(); i++)
        {
            vector<int> temp = sol[i];
            int maxi = *max_element(temp.begin(), temp.end());
            int minni = *min_element(temp.begin(), temp.end());
            sum += maxi - minni;
        }
        return sum;
    }
};
int main()
{

    return 0;
}