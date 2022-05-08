#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};
node *createnode()
{
    node *temp = new node();
    return temp;
}
void printList(node *n)
{
    while (n != NULL)
    {
        cout << n->val << " ";
        n = n->next;
    }
}
int main()
{
    node *first = createnode();
    node *second = createnode();
    node *third = createnode();
    first->val = 1;
    second->val = 5;
    third->val = 9;
    first->next = second;
    second->next = third;
    third->next = NULL;
    while (first)
    {
        cout << first->val << endl;
        first = first->next;
    }
    // printList(first);

    return 0;
}