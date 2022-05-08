#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int initial = -1;
        int sol;
        for (int i = 0; i < bank.size(); i++)
        {
            int into = -1;
            string temp = bank[i];
            for (int j = 0; i < temp.size(); j++)
            {
                if (initial == -1)
                {
                    if (temp[j] == '1')
                    {
                        initial++;
                    }
                }
                else
                {
                    if (temp[j] == '1')
                    {
                        into++;
                    }
                }
            }

           

            if (initial != -1 && into != -1)
            {
                int solplus = initial * into;
                sol += solplus;
                initial = into;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}