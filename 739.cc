#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {
// public:
//     vector<int> dailyTemperatures(vector<int> &temperatures)
//     {
//         vector<int> res(temperatures.size(), 0);
//         stack<int> newstack;
//         for (int i = temperatures.size() - 1; i >= 0; i--)
//         {
//             while (!newstack.empty() && temperatures[i] >= temperatures[newstack.top()])
//             {
//                 newstack.pop();
//                 if(!newstack.empty())
//                 {
//                     res[i]=newstack.top()-i;
//                     newstack.push(i);
//                 }
//             }
//         }
//         return res;

//         // stack<int> chutiya;
//         // chutiya.push(temperatures[0]);
//         // for (int i = 1; i < temperatures.size(); i++)
//         // {

//         //     for (int j = 1; j < temperatures.size(); j++)
//         //     {
//         //         if (chutiya.top() < temperatures[j])
//         //         {
//         //             res.push_back(chutiya.size());
//         //         }
//         //         else
//         //         {
//         //             chutiya.push(temperatures[j]);
//         //         }
//         //     }
//         //     while (!chutiya.empty())
//         //     {
//         //         chutiya.pop();
//         //     }
//         // }
//         // return res;
//     }
// };
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> sol;
        for (int i = 0; i < temperatures.size(); i++)
        {
            int temp = temperatures[i];
            int push = 0;
            bool milgya = false;
            for (int j = i + 1; i < temperatures.size(); i++)
            {
                if (temperatures[j] > temp)
                {
                    push++;
                    milgya = true;
                    sol.push_back(push);
                }
                else
                {
                    push++;
                }
            }
            if (!milgya)
            {
                sol.push_back(0);
            }
        }
        return sol;
    }
};
int main()
{
    Solution h;
    vector<int> hh = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> yo = h.dailyTemperatures(hh);
    for (int i = 0; i < yo.size(); i++)
    {
        cout << yo[i] << " ";
    }

    return 0;
}