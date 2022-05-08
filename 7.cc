#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void reversem(int x)
    {
        int sol = 0;

        while (x > 0)
        {
            sol = sol * 10 + x % 10;

            // int z = x % 10;

            // sol.push_back(z);

            x = x / 10;
        }
        cout << sol;
    }
};
int main()
{
    // reversem(153);
    Solution h;
    h.reversem(153);

    return 0;
}