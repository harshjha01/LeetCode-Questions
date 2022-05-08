#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> nsr(vector<int> &arr)
    {
        stack<pair<int, int>> s;
        vector<int> sol;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (s.size() == 0)
            {
                sol.push_back(arr.size());
            }
            if (s.size() > 0 && s.top().second < arr[i])
            {
                sol.push_back(s.top().first);
            }
            if (s.size() > 0 && s.top().second >= arr[i])
            {
                while (s.size() > 0 && s.top().second >= arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    sol.push_back(arr.size());
                }
                if (s.size() > 0 && s.top().second < arr[i])
                {
                    sol.push_back(s.top().first);
                }
            }
            s.push({i, arr[i]});
        }
        reverse(sol.begin(), sol.end());
        return sol;
    }

    vector<int> nsl(vector<int> &arr)
    {
        vector<int> sol;
        stack<pair<int, int>> s;
        for (int i = 0; i < arr.size(); i++)
        {
            if (s.size() == 0)
            {
                sol.push_back(arr.size());
            }
            if (s.size() > 0 && s.top().second < arr[i])
            {
                sol.push_back(s.top().first);
            }
            if (s.size() > 0 && s.top().second >= arr[i])
            {
                while (s.size() > 0 && s.top().second >= arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    sol.push_back(arr.size());
                }
                if (s.size() > 0 && s.top().second < arr[i])
                {
                    sol.push_back(s.top().first);
                }
            }
            s.push({i, arr[i]});
        }
        return sol;
    }
    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> left = nsl(heights);
        vector<int> right = nsr(heights);
        int maxi = INT_MIN;
        for (int i = 0; i < heights.size(); i++)
        {
            int temp = heights[i] * right[i] - left[i] - 1;
            maxi = max(maxi, temp);
        }
        return maxi;
    }
};
class Solution
{
public:
    vector<int> nsr(vector<int> arr)
    {
        vector<int> sol;
        stack<int> s;
        int n = arr.size();
        for (int i = n - 1; i > 0; i--)
        {
            if (s.empty())
            {
                sol.push_back(n);
            }
            else if (!s.empty() && s.top() < arr[i])
            {
                sol.push_back(s.top());
            }
            else
            {
                while (!s.empty() && s.top() > arr[i])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    sol.push_back(n);
                }
                else if (!s.empty() && s.top() < arr[i])
                {
                    sol.push_back(s.top());
                }
            }

            s.push(arr[i]);
        }
        reverse(sol.begin(), sol.end());
        return sol;
    }
    vector<int> nsl(vector<int> arr)
    {
        vector<int> sol;
        stack<int> s;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (s.empty())
            {
                sol.push_back(n);
            }
            else if (!s.empty() && s.top() < arr[i])
            {
                sol.push_back(s.top());
            }
            else
            {
                while (!s.empty() && s.top() > arr[i])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    sol.push_back(n);
                }
                else if (!s.empty() && s.top() < arr[i])
                {
                    sol.push_back(s.top());
                }
            }

            s.push(arr[i]);
        }

        return sol;
    }
    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> nextsr = nsr(heights);
        vector<int> nextsl = nsl(heights);
        int sol = INT_MIN;
        for (int i = 0; i < heights.size(); i++)
        {
            int temp = heights[i] * (nextsr[i] - nextsl[i] - 1);
            sol = max(sol, temp);
        }
        return sol;
    }
};
int main()
{

    return 0;
}