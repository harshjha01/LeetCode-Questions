#include <bits/stdc++.h>
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
    vector<ListNode *> gandhi(ListNode *head, int k)
    {
        ListNode *itr = head;
        if (!itr)
        {
            ListNode *node = new ListNode();
            return {node, itr};
        }
        ListNode *toreturn = head;
        ListNode *prev = new ListNode(-1);
        prev->next = head;
        while (itr && k--)
        {
            prev = prev->next;
            itr = itr->next;
        }
        prev->next = NULL;
        return {toreturn, itr};
    }

    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        ListNode *headitr = head;
        vector<ListNode *> sol;
        int size = 0;
        while (headitr)
        {
            size++;
            headitr = headitr->next;
        }
        double d = double(size) / double(k);
        int forwhile = k;

        if (size / k == 0)
        {
            while (forwhile--)
            {
                auto returned = gandhi(head, 1);
                sol.push_back(returned[0]);
                head = returned[1];
            }
            return sol;
        }
        else
        {
            bool isfirst = true;
            k = size / k;
            while (forwhile--)
            {

                if (isfirst)
                {
                    auto returned = gandhi(head, k + 1);
                    sol.push_back(returned[0]);
                    head = returned[1];
                    isfirst = false;
                }
                else
                {
                    auto returned = gandhi(head, k);
                    sol.push_back(returned[0]);
                    head = returned[1];
                }
            }
            return sol;
        }
    }
};
int main()
{

    return 0;
}