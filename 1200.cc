#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        vector<vector<int>> vv;
        int i = 0, j = 1;
        sort(arr.begin(), arr.end());
        int base = arr[j] - arr[i];
        vector<int> temp;
        while (j < arr.size())
        {
            // base = min(base, );
            int tt = base;
            base = min(arr[j] - arr[i], base);
            if (base == tt)
            {
                if (arr[j] - arr[i] == base)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    vv.push_back(temp);
                    temp.clear();
                }
            }
            else if (base < tt)
            {
                vv.clear();
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                vv.push_back(temp);
                temp.clear();
            }
            i++;
            j++;
        }
        return vv;
    }
};
// class Solution
// {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int> &arr)
//     {
//         vector<vector<int>> vv;
//         sort(arr.begin(), arr.end());
//         int basic = INT_MIN;
//         vector<int> temp;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (arr[i + 1] - arr[i] < basic)
//             {
//                 vv.clear();
//                 basic = abs(arr[i + 1] - arr[i]);
//                 temp.push_back(arr[i + 1]);
//                 temp.push_back(arr[i]);
//                 vv.push_back(temp);
//                 temp.clear();
//             }
//             if (arr[i + 1] - arr[i] == basic)
//             {

//                 temp.push_back(arr[i + 1]);
//                 temp.push_back(arr[i]);
//                 vv.push_back(temp);
//                 temp.clear();
//             }
//         }
//         return vv;
//     }
// };
int main()
{

    return 0;
}