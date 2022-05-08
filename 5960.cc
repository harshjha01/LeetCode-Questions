#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string capitalizeTitle(string title)
    {
        string sol = "";
        for (int i = 0; i < title.size(); i++)
        {
            string temp = "";
            while (title[i] != ' ')
            {
                temp.push_back(title[i]);
            }
            if (temp.size() <= 2)
            {
                for (int t = 1; t < temp.size(); t++)
                {
                    sol.push_back(tolower(temp[t]));
                }
            }
            else
            {
                char x = temp[0];
                x = toupper(x);
                sol.push_back(x);
                for (int t = 1; t < temp.size(); t++)
                {
                    sol.push_back(tolower(temp[t]));
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