#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string removeDuplicates(string s)
    {
        // "abbaca"
        stack<char> stack1;
        stack1.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (!stack1.empty() && stack1.top() == s[i])
            {
                stack1.pop();
            }
            else
            {
                stack1.push(s[i]);
            }
        }
        string temp = "";
        while (!stack1.empty())
        {
            temp.push_back(stack1.top());
            stack1.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};

int main()
{
    
    
    Solution harsh;
   
    string ss = "abbaca";
    harsh.removeDuplicates(ss);

    return 0;
}