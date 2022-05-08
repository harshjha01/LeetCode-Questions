#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words)
    {
        int n = queries.size(), m = words.size();
        vector<int> q;
        vector<int> w;
        vector<int> sol;
        if (n == 0 || m == 0)
        {
            return {};
        }
        for (int i = 0; i < n; i++)
        {
            string temp = queries[i];
            if (temp.size() == 1)
            {
                q.push_back(1);
            }
            else
            {
                sort(temp.begin(), temp.end());
                int j = 0;
                int topush = 1;
                while (temp[j] == temp[j + 1])
                {
                    j++, topush++;
                }
                q.push_back(topush);
            }
        }
        for (int i = 0; i < m; i++)
        {
            string temp = words[i];
            if (temp.size() == 1)
            {
                w.push_back(1);
            }
            else
            {
                sort(temp.begin(), temp.end());
                int j = 0;
                int topush = 1;
                while (temp[j] == temp[j + 1])
                {
                    j++, topush++;
                }
                w.push_back(topush);
            }
        }
        vector<int> sol;
        sort(w.begin(), w.end());
        for (int i = 0; i < q.size(); i++)
        {
            int temp = q[i];
            int idx = upper_bound(w.begin(), w.end(), temp) - w.begin();
            int topush = w.size() - idx;
            // [1,2,3,4]
            //  1 2 3 4

            // for (int j = 0; j < w.size(); j++)
            // {
            //     if (temp < w[j])
            //     {
            //         topush++;
            //     }
            // }
            sol.push_back(topush);
        }
        return sol;
    }
};
int main()
{

    /*


        1  2  3  4  5
        -5  -4  2  -1  -2


            2
            3




    */

    return 0;
}