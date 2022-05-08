#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        // int count = 0;
        // for (int i = 0; i < jewels.size(); i++)
        // {
        //     for (int j = 0; j < stones.size(); j++)
        //     {
        //         if (jewels[i] == stones[j])
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
         int count = 0;
        unordered_map<char, int> harsh;
        for (int i = 0; i < jewels.size(); i++)
        {
            harsh[jewels[i]]++;
        }
        for (int j = 0; j < stones.size(); j++)
        {
            if (harsh.find(stones[j]) != harsh.end())
            {
                count++;
            }
        }
    }
};
int main()
{

    return 0;
}