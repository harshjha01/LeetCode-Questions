#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> a;
    int q;
    int subtractProductAndSum(int n)
    {

        long long int sum = 0, product = 1;

        while (n)
        {
            int temp = n % 10;
            product = product * temp;
            sum = sum + temp;
            n = n / 10;
        }

        return product - sum;
    }
};

int main()
{

    return 0;
}