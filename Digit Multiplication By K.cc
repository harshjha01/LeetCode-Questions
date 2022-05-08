// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// string intokar(string s, int k)
// {
//     string sol = "";
//     for (auto &i : s)
//     {
//         int first = i - 48;
//         first *= k;
//         string temp = to_string(first);
//         sol += temp;
//     }
//     return sol;
// }
// int helper(string s, int k, int m)
// {

//     while (m--)
//     {
//         s = intokar(s, k);
//     }
//     return s.size();
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, m;
//         cin >> n >> k >> m;
//         string s = "";
//         for (int i = 0; i < n; i++)
//         {
//             char c;
//             cin >> c;
//             s.push_back(c);
//         }
//         cout << helper(s, k, m) << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string intokar(string s, int k)
{
    string sol1 = "";
    string sol2 = "";
    int n = s.size();
    int i = 0, j = n - 1;
    if (n % 2 != 0)
    {
        while (i <= j)
        {
            if (i == j)
            {
                int first = s[i] - 48;
                first *= k;
                string temp1 = to_string(first);
                sol1 += temp1;
            }
            else
            {
                int first = s[i] - 48;
                first *= k;
                int last = s[j] - 48;
                last *= k;
                string temp1 = to_string(first);
                string temp2 = to_string(last);
                sol1 += temp1;
                sol2 += temp2;
            }
            i++;
            j--;
        }
    }
    else
    {
        while (i < j)
        {

            int first = s[i] - 48;
            first *= k;
            int last = s[j] - 48;
            last *= k;
            string temp1 = to_string(first);
            string temp2 = to_string(last);
            sol1 += temp1;
            sol2 += temp2;

            i++;
            j--;
        }
    }
    return sol1 + sol2;
    // string sol = "";
    // for (auto &i : s)
    // {
    //     int first = i - 48;
    //     first *= k;
    //     string temp = to_string(first);
    //     sol += temp;
    // }
    // return sol;
}
int helper(string s, int k, int m)
{

    while (m--)
    {
        s = intokar(s, k);
    }
    return s.size() % 1000000007;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
        cout << helper(s, k, m) << endl;
    }

    return 0;
}

// LOL
//  #include <bits/stdc++.h>
//  #include <iostream>
//  using namespace std;
//  vector<long long int> intokar(vector<long long int> s, int k)
//  {
//      string sol = "";
//      vector<long long int> sol;
//      for (auto &i : s)
//      {
//          int first = i - 48;
//          first *= k;
//          string temp = to_string(first);
//          sol += temp;
//      }
//      for (auto &i : s)
//      {
//          long long int first = s[i] * k;

//     }
// }
// int helper(vector<long long int> s, int k, int m)
// {

//     while (m--)
//     {
//         s = intokar(s, k);
//     }
//     return s.size();
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k, m;
//         cin >> n >> k >> m;
//         vector<long long int> s;
//         for (int i = 0; i < n; i++)
//         {
//             int c;
//             cin >> c;
//             s.push_back(c);
//         }
//         cout << helper(s, k, m) << endl;
//     }

//     return 0;
// }