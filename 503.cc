// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// class Solution
// {
// public:
//     vector<int> nextGreaterElements(vector<int> &nums)
//     {
//         vector<int> res;
//         int k = 0;
//         int temp = nums[nums.size()];
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] > nums[j])
//                 {
//                     res.push_back(nums[i]);
//                 }
//                 res.push_back(-1);
//             }
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int max = -1;
//             if (nums[i] > max)
//             {
//                 max = nums[i];
//             }
//             res.push_back(max);
//         }
//         return res;
//     }
// };
// class Solution

// {
// public:
//     vector<int> nextGreaterElements(vector<int> &nums)
//     {
//         vector<int> res;
//         int ths = * max_element(nums.begin(), nums.begin());
//         int k = 0;
//         int maximun = -1;
//         int temp = nums[nums.size()];
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] > nums[j])
//                 {
//                     maximun = nums[i];
//                 }
//             }
//             res.push_back(maximun);
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int max = -1;
//             if (ths==temp)
//             {

//             }

//             if (nums[i] > temp)
//             {
//                 max = nums[i];
//             }

//             res.push_back(max);
//         }
//         return res;
//     }
// };
// class Solution

// {
// public:
//     vector<int> nextGreaterElements(vector<int> &nums)
//     {
//         stack<int> temp;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 temp.push(nums[j]);
//                 break;
//             }
//             temp.push(-1);
//             break;
//         }
//     }
// };

// int main()
// {

//     return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        vector<int> first;
        vector<int> sol;
        int n = nums.size();
        stack<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.size() == 0)
            {
                first.push_back(-1);
            }
            if (s.size() > 0 && s.top() > nums[i])
            {
                first.push_back(s.top());
            }
            if (s.size() > 0 && s.top() <= nums[i])
            {
                while (s.size() > 0 && s.top() <= nums[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    first.push_back(-1);
                }
                if (s.size() > 0 && s.top() > nums[i])
                {
                    first.push_back(s.top());
                }
            }
            s.push(nums[i]);
        }
        reverse(first.begin(), first.end());
        for (int i = 0; i < first.size(); i++)
        {
            if (first[i] != -1)
            {
                sol.push_back(first[i]);
            }
            else
            {
                int j = 0;
                while (j < i)
                {
                    if (nums[i] < first[j])
                    {
                        sol.push_back(first[j]);
                        break;
                    }
                    j++;
                }
                if (j == i)
                {
                    sol.push_back(-1);
                }
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}