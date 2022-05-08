// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// class Solution
// {
// public:
//     void sttoi(string num)
//     {
//         int sum = 0;
//         // int i = 0;
//         for (int i = 0; i < num.size(); i++)
//         {
//             sum += num[i];
//             sum *= 10;
//         }

//         // while (i < num.size())
//         // {
//         // sum *= 10;
//         // sum += num[i];
//         // i++;

//         //     // sum += num[i];
//         //     // i++;
//         //     // if (i < num.size() - 1)
//         //     // {
//         //     //     sum *= 10;
//         //     // }
//         // }
//         // return sum;
//         cout << sum;
//     }
//     string multiply(string num1, string num2)
//     {
//         // int v1 = sttoi(num1);
//         // int v2 = sttoi(num2);
//         // int v3 = v1 * v2;
//         // return to_string(v3);
//     }
// };
// int main()
// {
//     Solution h;
//     string s = "1224";
//     // cout << h.sttoi(s);
//     // cout << "finish";
//     h.sttoi(s);
//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int sttoi(string num)
    {
        int sum = 0;
        int i = 0;
        // while (i < num.size())
        // {
        //     sum += num[i];
        //     i++;
        //     if (i <= num.size() - 2)
        //     {
        //         sum *= 10;
        //     }
        // }
        for (int i = 0; i < num.size() - 1; i++)
        {
           sum+=
        }

        return sum;
    }
    string multiply(string num1, string num2)
    {
        int v1 = sttoi(num1);
        int v2 = sttoi(num2);
        int v3 = v1 * v2;
        return to_string(v3);
    }
};
int main()
{
    Solution h;
    string s = "2";
    cout << h.sttoi(s);
    return 0;
}