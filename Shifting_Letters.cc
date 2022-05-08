#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void shiftingLetters(string s, vector<int> shifts)
    {
        // for (int i = 0; i < shifts.size(); i++)
        // {
        //     for (int j = 0; j < i; j++)
        //     {
        //         char temmp = s[i];
        //         temmp += shifts[i];
        //         s[i] = temmp;
        //     }
        // }
        // return s;
        int j = 0;
        while (j < s.size())
        {
            for (int i = 0; i <= j; i++)
            {
                
                char temmp = s[i];
                temmp += shifts[j];
                
                s[i] = temmp;
                
            }
           
            j++;
        }
    }
};
int main()
{
    Solution h;
    string s = "aa";
    vector<int> k = {1, 2};
    h.shiftingLetters(s, k);
    return 0;
}