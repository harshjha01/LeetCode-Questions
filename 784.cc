#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<string> letterCasePermutation(string s)
    {
        string op;
        vector<string> sol;
        solve(s, op, sol);
        return sol;
    }
    void solve(string in, string op, vector<string> &sol)
    {
        if (in.size() == 0)
        {
            sol.push_back(op);
            return;
        }

        if (isalpha(in[0]))
        {
            string op1 = op, op2 = op;
            op1.push_back(tolower(in[0]));
            op2.push_back(toupper(in[0]));
            in.erase(in.begin() + 0);
            solve(in, op1, sol);
            solve(in, op2, sol);
        }
        else
        {
            string op3 = op;
            op3.push_back(in[0]);
            in.erase(in.begin() + 0);
            solve(in, op3, sol);
        }
    }
};
int main()
{

    return 0;
}