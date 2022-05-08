#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int t = 0, x = 0, y = 0, z = 0;
    cout << "enter t \n";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "enter x y z \n";

        cin >> x, y, z;
        // cin >> x;
        // cin >> y;
        // cin >> z;
        if (x + (2 * z) >= y)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}