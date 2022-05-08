#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {
// public:
// #define ull unsigned long long int
//     int concatenatedBinary(int n)
//     {

//         string harsh;
//         for (int i = 1; i <= n; i++)
//         {
//             int a = decimalToBinary(i);
//             string ss = to_string(a);
//             harsh.append(ss);
//             ss.clear();
//         }
//         int sol = stoi(harsh);
//         return binaryToDecimal(sol);
//     }
//     int binaryToDecimal(int n)
//     {
//         int num = n;
//         int dec_value = 0;

//         // Initializing base value to 1, i.e 2^0
//         int base = 1;

//         int temp = num;
//         while (temp)
//         {
//             int last_digit = temp % 10;
//             temp = temp / 10;

//             dec_value += last_digit * base;

//             base = base * 2;
//         }

//         return dec_value;
//     }
//     int decimalToBinary(int N)
//     {

//         // To store the binary number
//         ull B_Number = 0;
//         int cnt = 0;
//         while (N != 0)
//         {
//             int rem = N % 2;
//             ull c = pow(10, cnt);
//             B_Number += rem * c;
//             N /= 2;

//             // Count used to store exponent value
//             cnt++;
//         }

//         return B_Number;
//     }
// };
class Solution
{
public:
    // #define ull unsigned long long int
    int concatenatedBinary(int n)
    {
        long long int sol;
        int i = 1;
        while (i <= n)
        {
            // int d =  log2(i) ;
            sol = ((sol << (1 + int(log2(i)))) % 1000000007 + i) % 1000000007;
            i++;
        }
        return sol;
    }
};
int main()
{

    return 0;
}