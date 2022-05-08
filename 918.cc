// jai ram ji ki
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// int ket(vector<int> inpt)
// {
//     int curr = 0;
//     int maxi = 0;
//     for (int i = 0; i < inpt.size(); i++)
//     {
//         curr = curr + inpt[i];
//         maxi = max(maxi, curr);
//         if (curr < 0)
//         {
//             /* code */
//             curr = 0;
//         }
//     }
//     return maxi;
// }
int ket(vector<int> ar)
{
    int cursum = ar[0];
    int maxsum = ar[0];
    for (int i = 1; i < ar.size(); i++)
    {
        cursum += ar[i];
        if (cursum < ar[i])
        {
            cursum = ar[i];
           
        }
        maxsum = max(maxsum, cursum);
    }
    return maxsum;
}

int main()
{
    vector<int> them = {5, -3, 5};
    cout << ket(them);

    return 0;
}