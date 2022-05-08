#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        stack<int> yolo;
       
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C")
            {
                yolo.pop();
            }
            else if (ops[i] == "D")
            {
                int doublee = yolo.top();

                yolo.push(doublee * 2);
            }
            else if (ops[i] == "+")
            {
                int a = yolo.top();
                yolo.pop();
                int b = yolo.top();
                yolo.push(a);
                yolo.push(a + b);
            }
            else
            {
                yolo.push(stoi(ops[i]));
            }
        }
        int result = 0;
        while (!yolo.empty())
        {
            result = result + yolo.top();
            yolo.pop();
        }
        return result;
    }
};
int main()
{

    return 0;
}