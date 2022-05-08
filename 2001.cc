#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    long long interchangeableRectangles(vector<vector<int>> &rectangles)
    {
        vector<float> v;
        int n = rectangles.size();

        long long sol = 0;
        for (int i = 0; i < n - 1; i++)
        {
            float x = rectangles[i][0];
            float y = rectangles[i][1];
            float ans = x / y;
            for (int j = i + 1; j < n; j++)
            {
                float q = rectangles[j][0];
                float w = rectangles[j][1];
                float s = q / w;
                if (ans == sol)
                {
                    sol++;
                }
            }
        }
        return sol;
        long long sol = 0;
        unordered_map<long long, long long> m;
        for (int i = 0; i < rectangles.size(); i++)
        {
            float x = rectangles[i][0], y = rectangles[i][1];
            float div = x / y;
            m[div]++;
        }
        for (auto i : m)
        {
            long long res = i.second;
            sol += (res * (res - 1)) / 2;
        }
        return sol;
    }
};
int main()
{

    return 0;
}