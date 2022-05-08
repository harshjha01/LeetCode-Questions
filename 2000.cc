#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        size_t found = word.find(ch);
        if (found != string::npos)
        {
            string temp;

            int j = 0;
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] == ch)
                {
                    j = i;
                    temp.push_back(word[i]);
                    break;
                }
                temp.push_back(word[i]);
            }
           
            string k = word.substr(j+1, word.size() - 1);
            reverse(temp.begin(), temp.end());
            return temp + k;
        }
        return word;
    }
};
int main()
{
    string word = "abcd";
    char ch = 'c';
    Solution h;
    cout << h.reversePrefix(word, ch) << endl;

    return 0;
}