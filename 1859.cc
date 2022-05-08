#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void sortSentence(string s)

    {
        map<string, int> ss;
        // set<string, int> ss;
        string ans;
        int u = 0, v = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                string r = s.substr(u, v - 1);

                ss.insert(make_pair(r, s[i]));
                // ss.insert(r);

                v += 2;
                u = v;
            }
            else
            {
                v++;
            }
        }
        for (auto &i : ss)
        {
            ans += i.first;
        }
        return ans;
    }
};
int main()
{

    return 0;
}