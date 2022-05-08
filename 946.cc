#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> s;
        int i = 0, j = 0, n = pushed.size();
        while (i < n || j < n)
        {

            s.push(pushed[i]);
            i++;

            if (s.top() == popped[j])
            {
                while (s.top() == popped[j])
                {
                    s.pop();
                    j++;
                }
            }
        }
        return s.empty();
    }
};
int main()
{

    return 0;
}