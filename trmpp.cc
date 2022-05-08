#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL, *curr = head, *next = head->next;
    while (next != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        next = next->next;
    }
    curr->next = prev;
    return curr;
}
void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *helper(Node *big, Node *small)
{
    bool carry = false;
    Node *itr1 = big, *itr2 = small;
    Node *sol = new Node(-1);
    Node *solitr = sol;
    while (itr1 and itr2)
    {
        int a = itr1->data;
        int b = itr2->data;
        if (carry)
        {
            a--;
        }
        if (a < b)
        {
            a += 10;
            carry = true;
        }
        else
        {
            carry = false;
        }
        int c = a - b;
        Node *node = new Node(c);
        solitr->next = node;
        solitr = solitr->next;
        itr1 = itr1->next;
        itr2 = itr2->next;
    }
    if (itr1)
    {
        if (carry)
        {
            int a = itr1->data;
            a--;
            Node *node = new Node(a);
            solitr->next = node;
            solitr = solitr->next;
            itr1 = itr1->next;
        }
        while (itr1)
        {
            int a = itr1->data;
            Node *node = new Node(a);
            solitr->next = node;
            solitr = solitr->next;
            itr1 = itr1->next;
        }
    }
    if (itr2)
    {
        if (carry)
        {
            int a = itr2->data;
            a--;
            Node *node = new Node(a);
            solitr->next = node;
            solitr = solitr->next;
            itr2 = itr2->next;
        }
        while (itr2)
        {
            int a = itr2->data;
            Node *node = new Node(a);
            solitr->next = node;
            solitr = solitr->next;
            itr2 = itr2->next;
        }
    }
    // print(sol->next);
    return sol->next;
}
Node *removezero(Node *head)
{
    if (head->data != 0)
    {
        return head;
    }
    Node *itr = head;
    while (itr and itr->data == 0)
    {
        itr = itr->next;
    }
    return itr;
}
vector<Node *> bigandsmall(Node *l1, Node *l2)
{
    Node *l1itr = l1, *l2itr = l2;
    int l1s = 0, l2s = 0;
    while (l1itr)
    {
        l1s++;
        l1itr = l1itr->next;
    }
    while (l2itr)
    {
        l2s++;
        l2itr = l2itr->next;
    }
    vector<Node *> sol;
    if (l1s > l2s)
    {
        sol.push_back(l1);
        sol.push_back(l2);
    }
    if (l2s > l1s)
    {
        sol.push_back(l2);
        sol.push_back(l1);
    }
    if (l1s == l2s)
    {
        l1itr = l1;
        l2itr = l2;
        while (l1itr and l2itr)
        {
            if (l1itr->data == l2itr->data)
            {
                l1itr = l1itr->next;
                l2itr = l2itr->next;
            }
            else if (l1itr->data > l2itr->data)
            {
                sol.push_back(l1);
                sol.push_back(l2);
                break;
            }
            else if (l1itr->data < l2itr->data)
            {
                sol.push_back(l2);
                sol.push_back(l1);
                break;
            }
        }
        if (l1itr == NULL and l2itr == NULL)
        {
            sol.push_back(l2);
            sol.push_back(l1);
        }
    }
    return sol;
}
Node *subLinkedList(Node *l1, Node *l2)
{
    l1 = removezero(l1);
    l2 = removezero(l2);
    if (!l1)
    {
        return l2;
    }
    if (!l2)
    {
        return l1;
    }
    auto BandS = bigandsmall(l1, l2);
    l1 = BandS[0];
    l2 = BandS[1];
    l1 = reverse(l1);
    l2 = reverse(l2);
    Node *sol = helper(l1, l2);
    sol = removezero(sol);
    return sol;
}
int main()
{
    Node *first = new Node(1);
    Node *sec = new Node(0);
    Node *thi = new Node(0);
    Node *itr1 = first;
    first->next = sec;
    sec->next = thi;
    thi->next = NULL;
    Node *first1 = new Node(1);
    Node *sec1 = new Node(2);
    // Node *thi = new Node(0);
    Node *itr2 = first1;
    first1->next = sec1;
    sec1->next = NULL;
    // print(itr2);
    Node *revernode = reverse(itr1);
    Node *revernode2 = reverse(itr2);
    print(revernode);
    cout << endl;
    print(revernode2);
    cout << endl;
    helper(revernode, revernode2);
    // Node *nozero = removezero(itr1);
    // print(nozero);

    return 0;
}