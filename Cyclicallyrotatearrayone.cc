#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int index = n - 1;
    int i = 0;
    while (i < n)
    {

        swap(arr[index], arr[i]);
        i++;
    }
}
int main()
{

    return 0;
}