#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> v;

    vector<string> letterCombinations(string digits)
    {
        vector<string> sol;
        v.push_back("");
        v.push_back("");
        v.push_back("abc");
        v.push_back("def");
        v.push_back("ghi");
        v.push_back("jkl");
        v.push_back("mno");
        v.push_back("pqrs");
        v.push_back("tuv");
        v.push_back("wxyz");

        int n = digits.size();
        if (n == 0)
            return sol;
        if (n == 1)
        {
            string temp = v[stoi(digits)];
            for (int i = 0; i < temp.size(); i++)
            {
                string topush = "";
                topush.push_back(temp[i]);
                sol.push_back(topush);
                topush.pop_back();
            }
        }
        if (n == 2)
        {
            string temp = v[stoi(digits)];
            for (int i = 0; i < temp.size(); i++)
            {
                string topush = "";
                topush.push_back(temp[i]);
                sol.push_back(topush);
                topush.pop_back();
            }
        }
    }
};
class Solution
{
public:
    vector<string> phone = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string s)
    {
        if (s.size() == 1)
        {
            int last = stoi(s);
            string bs = phone[last];
            vector<string> ss;
            for (int i = 0; i < bs.size(); i++)
            {
                string topush = "";
                topush.push_back(bs[i]);
                ss.push_back(topush);
            }
            return ss;
        }
        string fsdi = "";
        fsdi.push_back(s[0]);
        int fd = stoi(fsdi);
        // s.pop_front();
        s.erase(s.begin() + 0);
        vector<string> ps = letterCombinations(s);
        string mul = phone[fd];
        vector<string> sol;
        int n = ps.size();
        for (int i = 0; i < mul.size(); i++)
        {
            char m = mul[i];
            for (int i = 0; i < n; i++)
            {
                string temp = "";
                temp.push_back(m);
                temp += ps[i];
                sol.push_back(temp);
            }
        }
    }
};
int main()
{

    return 0;
}