#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        if (n==0||n==1)
        {
            return n;
        }
        return fib(n-1)+fib(n-2);
        
    }
    //     int static fibno0 = 0;
    //     int static fibno1 = 1;
    //     int result = 0;
    //     int currentfiboo = 0, prevefiboo1 = fibno1, prevefiboo2 = fibno0;
    //     if (n == 0)
    //     {
    //         return fibno0;
    //     }
    //     if (n == 1)
    //     {
    //         return fibno1;
    //     }

    //     for (int i = 2; i <= n; i++)
    //     {

    //         currentfiboo = i;
    //         result = findfibo(currentfiboo, prevefiboo1, prevefiboo2);
    //         // result = findfibo(  2          ,    1          ,0);
    //         prevefiboo2 = prevefiboo1;
    //         prevefiboo1 = result;
    //     }
    //     return result;
    // }
    // int findfibo(int currentfibo, int prevefibo1, int prevefibo2)
    // {
    //     int g = prevefibo1 + prevefibo2;
    //     return g;
    // }
};
int main()
{
    Solution h;
    cout << h.fib(3);

    return 0;
}
