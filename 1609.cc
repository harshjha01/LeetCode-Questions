#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> even, odd, sol;
    void helper(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        queue<TreeNode *> s;
        s.push(root);
        bool oddtime = false;
        while (!s.empty())
        {
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = s.front();
                s.pop();
                sol.push_back(temp->val);
                // if(oddtime){
                //     odd.push_back(temp->val);
                // }
                // else{
                //     even.push_back(temp->val);
                // }
                if (temp->left)
                {
                    s.push(temp->left);
                }
                if (temp->right)
                {
                    s.push(temp->right);
                }
            }
            sol.push_back(-1);
            oddtime = !oddtime;
        }
    }
    void print(vector<int> arr)
    {
        for (auto i : arr)
        {
            cout << i << " ";
        }
    }
    bool cheakforodd(vector<int> arr)
    {
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr.end());
        if (arr2 != arr)
        {
            return false;
        }
        for (auto i : arr)
        {
            if (i % 2 != 1)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> slicing(vector<int> &arr,
                        int X, int Y)
    {

        // Starting and Ending iterators
        auto start = arr.begin() + X;
        auto end = arr.begin() + Y + 1;

        // To store the sliced vector
        vector<int> result(Y - X + 1);

        // Copy vector using copy function()
        copy(start, end, result.begin());

        // Return the final sliced vector
        return result;
    }
    bool cheakforeven(vector<int> arr)
    {
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr.end());
        reverse(arr2.begin(), arr.end());

        if (arr2 != arr)
        {
            return false;
        }
        for (auto i : arr)
        {
            if (i % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    bool isEvenOddTree(TreeNode *root)
    {
        if (!root)
        {
            return false;
        }
        helper(root);
        // print(sol);
        bool oddchance = false;
        for (int i = 0; i < sol.size(); i++)
        {
            int low = i;
            while (sol[i + 1] != -1)
            {
                i++;
            }
            int high = i;
            vector<int> arr;
            arr = slicing(sol, low + 1, high - 1);
            if (oddchance)
            {
                cheakforeven(arr);
            }
            else
            {
                cheakforodd(arr);
            }
        }
        return true;
    }
};
class Solution
{
public:
    vector<int> even, odd, sol;
    void helper(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        queue<TreeNode *> s;
        s.push(root);
        bool oddtime = false;
        while (!s.empty())
        {
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = s.front();
                s.pop();
                sol.push_back(temp->val);
                // if(oddtime){
                //     odd.push_back(temp->val);
                // }
                // else{
                //     even.push_back(temp->val);
                // }
                if (temp->left)
                {
                    s.push(temp->left);
                }
                if (temp->right)
                {
                    s.push(temp->right);
                }
            }
            sol.push_back(-1);
            oddtime = !oddtime;
        }
    }
    void print(vector<int> arr)
    {
        for (auto i : arr)
        {
            cout << i << " ";
        }
    }
    bool cheakforodd(vector<int> arr)
    {
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr.end());
        if (arr2 != arr)
        {
            return false;
        }
        for (auto i : arr)
        {
            if (i % 2 != 1)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> slicing(vector<int> &arr,
                        int X, int Y)
    {

        // Starting and Ending iterators
        auto start = arr.begin() + X;
        auto end = arr.begin() + Y + 1;

        // To store the sliced vector
        vector<int> result(Y - X + 1);

        // Copy vector using copy function()
        copy(start, end, result.begin());

        // Return the final sliced vector
        return result;
    }
    bool cheakforeven(vector<int> arr)
    {
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr.end());
        reverse(arr2.begin(), arr.end());

        if (arr2 != arr)
        {
            return false;
        }
        for (auto i : arr)
        {
            if (i % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    bool isEvenOddTree(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }
        int level = 0;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            if (level % 2 == 0)
            {
                priority_queue<int> pq;
                for (int i = 0; i < n; i++)
                {
                    TreeNode *temp = q.front();
                    q.pop();
                    if (temp->val % 2 == 0 || (!pq.empty() && temp->val <= pq.top()))
                    {
                        return false;
                    }
                    else
                    {
                        pq.push(temp->val);
                    }
                    if (temp->left)
                    {
                        q.push(temp->left);
                    }
                    if (temp->right)
                    {
                        q.push(temp->right);
                    }
                }
            }
            else
            {
                priority_queue<int, vector<int>, greater<int>> pq;
                for (int i = 0; i < n; i++)
                {
                    TreeNode *temp = q.front();
                    q.pop();
                    if (temp->val % 2 != 0 || (!pq.empty() && temp->val >= pq.top()))
                    {
                        return false;
                    }
                    else
                    {
                        pq.push(temp->val);
                    }
                    if (temp->left)
                    {
                        q.push(temp->left);
                    }
                    if (temp->right)
                    {
                        q.push(temp->right);
                    }
                }
            }
        }
    }
};
class Solution
{
public:
    bool iseven(int no)
    {
        if (no % 2 == 0)
        {
            return true;
        }
        return false;
    };
    bool isodd(int no){};
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int level = 0;
        vector<int> levelorder;
        int tempvar = INT_MIN;
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp != NULL)
            {

                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
                if (iseven(level))
                {
                    if (tempvar > temp->val)
                    {
                        return false;
                    }

                    if (iseven(temp->val))
                    {
                        return false;
                    }
                    tempvar = temp->val;
                }
                if (!iseven(level))
                {
                    if (tempvar < temp->val)
                    {
                        return false;
                    }
                    if (!iseven(temp->val))
                    {
                        return false;
                    }
                }
            }
            else
            {
                q.push(NULL);
                level++;
                if (iseven(level))
                {
                    tempvar = INT_MIN;
                }
                if (!iseven(level))
                {
                    tempvar = INT_MAX;
                }
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}