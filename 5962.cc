#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        int sol = 0;
        unordered_map<string, int> m;
        for (int i = 0; i < words.size(); i++)
        {
            string temp = words[i];
            string revtemp = temp;
            reverse(revtemp.begin(), revtemp.end());
            if (temp == revtemp)
            {
                sol += 2;
            }
            if (m.find(temp) != m.end())
            {
                sol += 4;
            }
            m[revtemp]++;
        }
        return sol;
    }
};
int main()
{

    return 0;
}