#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        vector<int> p = arr;
        sort(p.begin(), p.end());
        set<pair<int, int>> s;
        int h = 1;
        for (int i = 0; i < p.size(); i++)
        {
            s.insert(make_pair(p[i], h));
            h++;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (s.find(arr[i]).first != s.end())
            {
                
            }
        }
    }
};
int main()
{

    return 0;
}