// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// class Solution
// {
// public:
//     string minRemoveToMakeValid(string s)
//     {
//         stack<char> hh;
//         int n = s.size();
//         for (auto i = 0; i < n; i++)
//         {
//             if (s[i] == '(')
//             {
//                 hh.push(s[i]);
//                 cout << "pushing (" << endl;
//             }
//             if (s[i] == ')')
//             {
//                 if (!hh.empty())
//                 {
//                     hh.pop();
//                     cout << "poping 1 )" << endl;
//                 }
//                 else
//                 {
//                     s.erase(s.begin() + i);
//                     cout << "poping  2 )" << endl;
//                     cout<<i;
//                 }
//             }
//         }
//         int h = hh.size();
//         int b = s.size();
//         int count = 0;

//         while (count < h)
//         {
//             for (int i = 0; i < b; i++)
//             {
//                 if (s[i] == '(')
//                 {
//                     s.erase(s.begin() + i);
//                     count++;
//                 }
//             }
//         }

//         return s;
//         for (int i = 0; i < h;)
//         {
//             if (s[i] == '(')
//             {
//                 s.erase(s.begin() + i);
//                 i++;
//             }
//         }
//     }
// };
// int main()
// {
//     Solution harsh;
//     string j = "))((";
//     cout << j << endl;
//     j = harsh.minRemoveToMakeValid(j);
//     cout << j << endl;

//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {
// public:
//     string minRemoveToMakeValid(string s)
//     {
//         stack<int> hh;
//         int n = s.size();
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '(')
//             {
//                 hh.push(i);
//             }
//             if (s[i] == ')')
//             {
//                 if (!hh.empty())
//                 {
//                     hh.pop();
//                 }
//                 else
//                 {
//                     s[i] = '*';
//                 }
//             }
//         }
//         while (!hh.empty())
//         {
//             int g = hh.top();
//             s[g] = '*';
//             hh.pop();
//         }
//         string jj;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] != '*')
//             {
//                 jj.push_back(s[i]);
//             }
//         }

//         // int n = s.size();
//         // for (int i = 0; i < n; i++)
//         // {
//         //     if (s[i] == '*')
//         //     {
//         //         s.erase(s.begin() + i);
//         //     }
//         // }
//         return s;
//     }
// };
class Solution
{
public:
    string minRemoveToMakeValid(string str)
    {
        int n = str.size();
        stack<char> s;
        string sol = "";
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                s.push('(');
            }
            if (str[i] == ')')
            {
                if (!s.empty())
                {
                    s.pop();
                }
                else
                {
                    str[i] = '*';
                }
            }
        }
        int ssize = s.size();
        int j = n - 1;
        while (ssize)
        {
            if (str[j] == '(')
            {
                str[j] = '*';
                ssize--;
            }
            j--;
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '*')
            {
                continue;
            }
            else
            {
                sol.push_back(str[i]);
            }
        }
        return sol;
        // return str;
    }
};
int main()
{
    Solution h;
    cout << h.minRemoveToMakeValid("lee(t(c)o)de)");

    return 0;
}