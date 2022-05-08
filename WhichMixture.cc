#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int t = 0, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            cout << "Solution" << endl;
        }
        if (a == 0)
        {

            cout << "Liquid" << endl;
        }
        if (b == 0)
        {
            cout << "Solid" << endl;
        }
    }

    return 0;
}