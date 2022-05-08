#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int sol = 0;
        for (int i = 0; i < words.size(); i++)
        {
            unordered_map<char, int> m1;
            unordered_map<char, int> m2;
            string currword = words[i];
            for (auto l : currword)
            {
                m1[l]++;
            }
            for (int j = i + 1; i < words.size(); i++)
            {
                bool nonequal = true;
                for (auto n : words[j])
                {
                    if (m1.count(n) > 0)
                    {
                        nonequal = false;
                        break;
                    }
                }
                if (nonequal)
                {
                    int possiblesol = words[j].size() * currword.size();
                    sol = max(sol, possiblesol);
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