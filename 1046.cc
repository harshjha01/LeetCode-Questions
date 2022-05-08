#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int lastStoneWeight(vector<int> &arr)
    {
        if (arr.size() == 1)
            return arr[0];
        priority_queue<int> q;
        for (auto i : arr)
        {
            q.push(i);
        }
        while (!q.empty() && !q.size() == 1)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if (a != b)
            {
                int maxm = max(a, b);
                int minm = min(a, b);
                q.push(maxm - minm);
            }
        }
        if (!q.empty())
            return q.top();
        return -1;
    }
};
int main()
{

    return 0;
}