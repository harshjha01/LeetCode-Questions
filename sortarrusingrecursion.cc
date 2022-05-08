#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void insert(vector<int> &arr, int x)
{
    if (arr.size() == 0 || arr[arr.size() - 1] < x)
    {
        arr.push_back(x);
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    insert(arr, x);
    arr.push_back(temp);
}
void sortmyarray(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sortmyarray(arr);
    insert(arr, temp);
}

int main()
{
    vector<int> a = {5, 9, 2, 0, 4, 1};
    sortmyarray(a);
    for (auto &i : a)
    {
        cout << i << " ";
    }
    return 0;
}