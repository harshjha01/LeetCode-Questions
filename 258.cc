#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findno(int numm)
    {
        int q;
        int m = 0;
        while (numm != 0)
        {
            q = numm % 10;
            m = m + q;
            numm = numm / 10;
        }
        return m;
    }
    int addDigits(int num)
    {
        int k = 0;
        // do
        // {
        //     findno(num);
        // } while (num > 9);
        // return num;
        if (num <= 9)
        {
            return num;
        }
        return findno(num);
    }
};
class Solutionn
{
public:
    int addDigits(int num)
    {
        string temp = to_string(num);
        int sol = 0;

        for (int i = 0; i < temp.size(); i++)
        {
            sol += temp[i] - 48;
        }

        return sol;
    }
};
int main()
{
    Solutionn harsh;
    int bb = 49;
    // int no = harsh.addDigits(bb);
    int no = harsh.addDigits(bb);
    cout << no;

    // cout << no;
    return 0;
}