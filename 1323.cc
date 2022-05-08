#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maximum69Number(int num)
    {
        vector<int> a;
        int q;

        while (num != 0)
        {
            q = num % 10;
            a.push_back(q);
            num = num / 10;
        }
        for (int i = 0; i < a.size(); i++)
        {
            int hola = 0;
            if (a[i] == 6 && hola == 0)
            {
                a[i] = 9;
                hola++;
            }
        }
        int finalNumber = 0;
        for (int i = 0; i < a.size(); i++)
        {
            int nummm = a[i];
            if (nummm != 0)
            {
                while (nummm > 0)
                {
                    finalNumber *= 10;
                    nummm /= 10;
                }
                finalNumber += a[i];
            }
            else
            {
                finalNumber *= 10;
            }
        }
        return finalNumber;
    }
};
int main()
{

    return 0;
}