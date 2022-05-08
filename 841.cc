#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    unordered_set<int> s;
    void markvis(vector<int> arr)
    {

        for (auto i : arr)
        {
            s.insert(i);
        }
    }
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {

        int n = rooms.size();
        vector<bool> vis(n, false);
        s.insert(0);
        while (!s.empty())
        {
            int temp = *s.begin();
            s.erase(temp);
            if (!vis[temp])
            {
                vis[temp] = true;
                markvis(rooms[temp]);
            }
        }
        for (auto i : vis)
        {
            if (i == false)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}