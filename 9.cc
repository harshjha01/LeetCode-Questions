#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> a;
        int q;
        if (x < 0)
        {
            return false;
        }
        else
        {
            while (x != 0)
            {
                q = x % 10;
                a.push_back(q);
                x = x / 10;
            }
            int i = 0;
            int j = a.size() - 1;
            while (i < j)
            {
                if (a[i] == a[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    return false;
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