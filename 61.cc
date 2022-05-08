#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *itr = head, *sol, *solitr;
        int size = 0;
        if (!head || !head->next)
        {
            return head;
        }
        while (itr->next)
        {
            size++;
            itr = itr->next;
        }
        // cout << size;
        size++;
        k = k % size;
        itr->next = head;
        while (k--)
        {
            solitr = solitr->next;
        }
        sol = solitr->next;
        solitr->next = NULL;
        return sol;
    }
};
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *itr = head, *sol, *solitr;
        int size = 0;
        if (!head || !head->next)
        {
            return head;
        }
        while (itr->next)
        {
            size++;
            itr = itr->next;
        }
        // cout << size;
        size++;
        k = k % size;
        itr->next = head;
        while (k--)
        {
            solitr = solitr->next;
        }
        sol = solitr->next;
        solitr->next = NULL;
        return sol;
    }
};

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {

        ListNode *itr = head, *sol, *solitr;

        int size = 0;
        if (!head || !head->next)
        {
            return head;
        }
        while (itr->next)
        {
            size++;
            itr = itr->next;
        }
        // cout << size;
        size++;
        k = k % size;
        itr->next = head;
        solitr = head;
        k = size - k - 1;
        while (k--)
        {
            solitr = solitr->next;
        }
        sol = solitr->next;
        solitr->next = NULL;
        return sol;
    }
};
int main()
{

    return 0;
}