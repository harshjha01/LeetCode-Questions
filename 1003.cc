#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {
// public:
//     bool isValid(string s)
//     {

//         stack<char> p;
//         for (int i = 0; i < s.size() - 1; i++)
//         {
//             if (s[i] == 'c' && !p.empty())
//             {
//                 if (!p.empty() && p.top() == 'b')
//                 {
//                     p.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//                 if (!p.empty() && p.top() == 'a')
//                 {
//                     p.pop();
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 p.push(s[i]);
//             }
//         }
//         return p.empty();
//     }
// };
class Solution
{
public:
    void isValid(string s)
    {
        vector<char> a;

        int count = 1;
        int n = s.size();
        int i = 1;
        while (i < n)
        {

            if (s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c')
            {
                s.erase(s.begin() + (i - 1), s.begin() + (i + 2));
                i = 1;
                n = s.size();
            }
            i++;
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     if (s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c')
        //     {
        //         s.erase(s.begin() + (i - 1), s.begin() + (i + 2));
        //         i = 1;
        //         n = s.size();
        //     }
        // }
        cout << s;
    }
};
int main()
{
    string p = "aabcbc";
    Solution h;
    h.isValid(p);

    return 0;
}