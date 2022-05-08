#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
// class Solution
// {
// public:
//     bool find132pattern(vector<int> &nums)
//     {
//         // int i = 0, j = 0, k = 0;

//         stack<int> findingthetrugth;
//         findingthetrugth.push(nums[0]);
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (findingthetrugth.empty())
//             {
//                 findingthetrugth.push(nums[i]);
//             }

//             if (findingthetrugth.size() < 2 && !findingthetrugth.empty())
//             {
//                 if (findingthetrugth.top() < nums[i])
//                 {
//                     findingthetrugth.push(nums[i]);
//                 }
//                 else
//                 {
//                     findingthetrugth.empty();
//                 }
//             }
//             if (findingthetrugth.size() == 2)
//             {
//                 if (findingthetrugth.top() > nums[i])
//                 {
//                     int temp = findingthetrugth.top();
//                     findingthetrugth.pop();
//                     if (findingthetrugth.top() == nums[i])
//                     {
//                         return false;
//                     }
//                     else
//                     {
//                         return true;
//                     }
//                 }
//                 else
//                 {
//                     findingthetrugth.empty();
//                 }
//             }
//         }
//         return false;
//     }
// };
class Solution
{
public:
    bool find132pattern(vector<int> &nums)
    {

        for (int i = 0; i < nums.size()-2; i++)
        {
            for (int j = 1; j < nums.size() - 1; j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] < nums[k] && nums[k] < nums[j])
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};
int main()
{

    return 0;
}