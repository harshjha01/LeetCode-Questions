#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct cmp
{
    bool operator()(int x, int y)
    {
        return x > y;
    }
};
priority_queue<int, vector<int>, cmp> pq;
void print()
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main()
{
    pq.push(5);
    pq.push(7);
    pq.push(9);
    print();

    return 0;
}