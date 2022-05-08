#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class MyStack
{
public:
    queue<int> harsh;
    /** Initialize your data structure here. */
    MyStack()
    {
    }

    /** Push element x onto stack. */
    void push(int x)
    {

        harsh.push(x);
        for (auto i = 0; i < harsh.size()-1; i++)
        {
           harsh.push(harsh.front());
           harsh.pop();
        }
        
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        int hola = harsh.front();
        harsh.pop();
        return hola;
    }

    /** Get the top element. */
    int top()
    {
        int holaa = harsh.front();

        return holaa;
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        if (!harsh.empty())
        {
            return false;
        }
        return true;
    }
};

int main()
{

    return 0;
}