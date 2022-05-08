#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    unordered_set<string> st;
    void findpal(string output)
    {
        string temp = output;
        reverse(temp.begin(), temp.end());
        if (output == temp)
        {
            st.insert(output);
        }
    }
    void printSubsequence(string input, string output)
    {

        // Base Case
        // if the input is empty print the output string
        if (input.empty())
        {
            // cout << output << endl;

            return;
        }

        // output is passed with including
        // the Ist character of
        // Input string
        if (output.size() + 1 <= 3)
        {
            if (output.size() == 3)
            {
                findpal(output);
            }
            else
            {
                printSubsequence(input.substr(1), output + input[0]);
            }
        }

        // output is passed without
        // including the Ist character
        // of Input string
        if (output.size() <= 3)
        {
            if (output.size() == 3)
            {
                findpal(output);
            }
            else
            {
                printSubsequence(input.substr(1), output);
            }
        }
        else
        {
            return;
        }
    }
    int countPalindromicSubsequence(string s)
    {
        vector<int> first(26, -1);
        vector<int> last(26, -1);
        for (int i = 0; i < s.size(); i++)
        {
            if (first[s[i] - 'a'] == -1)
            {
                first[s[i] - 'a'] = i;
            }
            else
            {
                last[s[i] - 'a'] = i;
            }
        }
        int sol = 0;
        for (int i = 0; i < 26; i++)
        {
            unordered_set<char> st;
            if (first[i] != 1 && last[i] != first[i])
            {
                int low = first[i];
                int high = last[i];
                for (int j = low; j < high; j++)
                {
                    st.insert(s[j]);
                }
            }
            sol += st.size();
        }
        return sol;
    }
};
int main()
{

    return 0;
}