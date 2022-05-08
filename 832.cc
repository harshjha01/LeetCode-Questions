#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> flipandreverse(vector<int> k)
    {
        vector<int> v = k;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 0)
            {
                v[i] == 1;
            }
            else
            {
                v[i] == 0;
            }
        }
        // reverse(v.begin(), v.end());
        return v;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {

        vector<vector<int>> sol;
        int n = image.size();
        for (int i = 0; i < n; i++)
        {
            reverse(image[i].begin(), image[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < image[i].size(); j++)
            {
                if (image[i][j])
                {
                    /* code */
                }
                
            }
        }

        return sol;
    }
};
int main()
{

    return 0;
}