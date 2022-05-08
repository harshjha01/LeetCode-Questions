#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> sol;
        sol.push_back(first);
        int ss = first;
        for (int i = 0; i < encoded.size(); i++)
        {
            ss = ss ^ encoded[i];
            sol.push_back(ss);
        }        return sol;
    }
};
int main()
{

    return 0;
}