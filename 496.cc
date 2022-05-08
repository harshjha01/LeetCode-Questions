#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    // vector<int> ngr(vector<int> arr)
    // {
    //     stack<pair<int, int>> s;
    //     vector<int> sol;
    //     for (int i = arr.size() - 1; i >= 0; i--)
    //     {
    //         if (s.size() == 0)
    //         {
    //             sol.push_back(-1);
    //         }
    //         if (s.size() != 0 && s.top().first > arr[i])
    //         {
    //             sol.push_back(s.top().second);
    //         }
    //         if (s.size() != 0 && s.top().first <= arr[i])
    //         {
    //             while (s.size() != 0 && s.top().first <= arr[i])
    //             {
    //                 s.pop();
    //             }
    //             if (s.size() == 0)
    //             {
    //                 sol.push_back(-1);
    //             }
    //             if (s.size() != 0 && s.top().first > arr[i])
    //             {
    //                 sol.push_back(s.top().second);
    //             }
    //         }
    //         s.push({arr[i], i});
    //     }
    //     reverse(sol.begin(), sol.end());
    //     return sol;
    // }
    vector<int> nsr(vector<int> arr, int n)
    {
        vector<int> sol;
        stack<pair<int, int>> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.size() == 0)
            {
                sol.push_back(-1);
            }
            if (s.size() > 0 && s.top().first > arr[i])
            {
                sol.push_back(s.top().second);
            }
            if (s.size() > 0 && s.top().first <= arr[i])
            {
                while (s.size() > 0 && s.top().first <= arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    sol.push_back(-1);
                }
                if (s.size() > 0 && s.top().first > arr[i])
                {
                    sol.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});
        }
        reverse(sol.begin(), sol.end());
        return sol;
    }
    int finder(vector<int> arr, int x)
    {
        int i = 0, j = arr.size() - 1;
        while (j >= i)
        {
            if (arr[i] == x)
            {
                return i;
            }
            if (arr[j] == x)
            {
                return j;
            }
            i++;
            j--;
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ngrr = nsr(nums2, nums2.size());
        vector<int> sol;
        for (int i = 0; i < nums1.size(); i++)
        {
            int temp = finder(nums2, nums1[i]);
            if (ngrr[temp] == -1)
            {
                sol.push_back(-1);
            }
            else
            {
                sol.push_back(nums2[ngrr[temp]]);
            }
        }
        return sol;
    }
};
class Solution
{
public:
    vector<int> NGRR(vector<int> arr)
    {
        int n = arr.size();
        stack<int> s;
        vector<int> sol;
        for (int i = n - 1; i >= 0; --i)
        {
            if (s.empty())
            {
                sol.push_back(-1);
            }
            else if (!s.empty() && s.top() > arr[i])
            {
                sol.push_back(s.top());
            }
            else
            {
                while (!s.empty() && s.top() < arr[i])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    sol.push_back(-1);
                }
                else if (!s.empty() && s.top() > arr[i])
                {
                    sol.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        return sol;
    }
    int findno(vector<int> arr, int no)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == no)
            {
                return i;
                break;
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ngr = NGRR(nums2);
        vector<int> sol;
        for (int i = 0; i < nums1.size(); i++)
        {
            int j = findno(nums2, nums1[i]);
            sol.push_back(ngr[j]);
        }
        return sol;
    }
};
int main()
{
    vector<int> sol = {1, 3, 4, 2};
    Solution h;
    vector<int> ans = h.nsr(sol, sol.size());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}