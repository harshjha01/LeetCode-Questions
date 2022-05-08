#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string h;
        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isalnum(s[i]))
            {
                h.push_back(s[i]);
            }
        }
        string hh = h;
        reverse(hh.begin(), hh.end());
        if (hh == h)
        {
            return true;
        }
        return false;
    }
};
// class Solution
// {
// public:
//     vector<char> helper(string s)
//     {
//         vector<char> v;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (int(s[i]) > 96 && int(s[i]) < 123 || int(s[i]) > 64 && int(s[i]) < 91 || int(s[i]) > 47 && int(s[i]) < 58)
//             {
//                 v.push_back(s[i]);
//             }
//         }
//         return v;
//     }
//     bool isPalindrome(string s)
//     {
//         vector<char> v = helper(s);
//         int i = 0, j = v.size() - 1;
//         while (i > j)
//         {
//             if (v[i] != v[j])
//             {
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
// };
int main()
{

    return 0;
}