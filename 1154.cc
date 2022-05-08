#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int dayOfYear(string date)
    {
        string op1 = date.substr(5, 6);
        string op2 = date.substr(8, 9);
        int op11 = stoi(op1);
        int op12 = stoi(op2);
        return (op11 * 30) + op12;
    }
};
int main()
{

    return 0;
}