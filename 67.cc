// #include <iostream>
// #include <cmath>
// #include <sstream>
// #include <bits/stdc++.h>
// using namespace std;
// #define ull unsigned long long int
// class Solution
// {
// public:
//     int binaryToDecimal(string n)
//     {

//         string num = n;
//         int dec_value = 0;

//         // Initializing base value to 1, i.e 2^0
//         int base = 1;

//         int len = num.length();
//         for (int i = len - 1; i >= 0; i--)
//         {
//             if (num[i] == '1')
//                 dec_value += base;
//             base = base * 2;
//         }

//         return dec_value;
//     }
//     string decimalToBinary(int n)
//     {
//         //finding the binary form of the number and
//         //coneverting it to string.
//         string s = bitset<64>(n).to_string();

//         //Finding the first occurance of "1"
//         //to strip off the leading zeroes.
//         const auto loc1 = s.find('1');

//         if (loc1 != string::npos)
//             return s.substr(loc1);

//         return "0";
//     }

//     string addBinary(string a, string b)
//     {

//         int first = binaryToDecimal(a);
//         int second = binaryToDecimal(b);
//         int adding = first + second;
//         return decimalToBinary(adding);
//     }
// };
// int main()
// {
//     Solution harsh;
//     string aa = "1010";
//     string ab = "1011";
//     string res = harsh.addBinary(aa, ab);
//     cout << res;

//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        
    }
};
int main()
{

    return 0;
}