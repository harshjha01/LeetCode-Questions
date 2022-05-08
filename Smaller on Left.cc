#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    stack<int> s;
    vector<int> sol;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() < arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            sol.push_back(-1);
        }
        if (s.top() < arr[i])
        {
            sol.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return sol;
}

int main()
{

    return 0;
}