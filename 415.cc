#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
       long long int a = stoi(num1);
       long long int b = stoi(num2);
       long long int c = a + b;
        return to_string(c);
    }
};
int main()
{

    return 0;
}