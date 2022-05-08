#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int findComplement(int num)
    {
        vector<int> binary;
        while (num != 0)
        {
            binary.push_back(num % 2);
            num /= 2;
        }
        for (int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == 0)
            {
                binary[i] = 1;
            }
            if (binary[i] == 1)
            {
                binary[i] = 0;
            }
        }
        int sol = 0;
        for (int i = binary.size() - 1; i >= 0; i--)
        {
            sol = sol * 2 + binary[i];
        }
        return sol;
    }
};
class Solution
{
public:
#define ull unsigned long long int
    int findComplement(int num)
    {
        vector<int> a = dec2ToBinary(num);
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
            }
            if (a[i] == 0)
            {
                a[i] = 1;
            }
        }
        int sol = VectorToInt(a);
        return binaryToDecimal(sol);
    }
    int VectorToInt(vector<int> v)
    {
        reverse(v.begin(), v.end());
        int decimal = 1;
        int total = 0;
        for (auto &it : v)
        {
            total += it * decimal;
            decimal *= 10;
        }
        return total;
    }

    int binaryToDecimal(int n)
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

        return dec_value;
    }
    vector<int> dec2ToBinary(int n)
    {
        // array to store binary number
        int binaryNum[32];

        // counter for binary array
        int i = 0;
        while (n > 0)
        {

            // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        vector<int> ttt;
        // printing binary array in reverse order
        for (int j = i - 1; j >= 0; j--)
        {
            // cout << binaryNum[j];
            ttt.push_back(binaryNum[j]);
        }
        // for (int z = 0; z < ttt.size(); z++)
        // {
        //     cout << ttt[z] << " ";
        // }
        return ttt;
    }
};
int main()
{
    Solution h;
    // cout << h.decimalToBinary(14) << endl;
    // cout << h.binaryToDecimal(101);
    h.dec2ToBinary(14);

    return 0;
}
