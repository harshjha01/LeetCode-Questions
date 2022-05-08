
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string binaryToDecimal(int n)
    {
        int num = n;
        int dec_value = 0;

        // Initializing base value to 1, i.e 2^0
        int base = 1;

        int temp = num;
        while (temp)
        {
            int last_digit = temp % 10;
            temp = temp / 10;

            dec_value += last_digit * base;

            base = base * 2;
        }

        string sol;
        string tempp = to_string(dec_value);
        for (int i = 0; i < 16 - tempp.size(); i++)
        {
            sol.push_back('0');
        }
        for (int i = 0; i < tempp.size(); i++)
        {
            sol.push_back(tempp[i]);
        }
        return sol;
    }
    int hammingDistance(int x, int y)
    {
        int count = 0;
        string a = binaryToDecimal(x);
        string b = binaryToDecimal(y);
        if (a.size() == b.size())
        {

            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] != b[i])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
int main()
{
    Solution h;

    string a = h.binaryToDecimal(3);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}