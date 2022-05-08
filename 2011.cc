#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int sol = 0;
        for (int i = 0; i < operations.size() - 1; i++)
        {
            string s = operations[i];
            if (s == "++x" )
            {
                sol++;
            }
            else if (s == "x++")
            {
                sol++;
            }
            else if (s == "--x")
            {
                sol--;
            }
            else if (s == "x--")
            {
                sol--;
            }
            
        }
        return sol;
    }
};
int main()
{

    return 0;
}