#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        // int harsh[26]={false};
        // unordered_map<char, char> harsh;
        unordered_set<char> harsh;
        for (int i = 0; i < sentence.size(); i++)
        {
            harsh.insert(sentence[i]);
        }
        if (harsh.size()==26)
        {
            return true;
        }
        return false;
        

        // for (int i = 0; i < sentence.size(); i++)
        // {
        //     harsh[sentence[i]]++;
        // }
        // for (int i = 0; i < harsh.size(); i++)
        // {
        //     if (harsh[i] == 0)

        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};
int main()
{

    return 0;
}