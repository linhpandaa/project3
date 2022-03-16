#include "lib.h"

int maxEven(vector<int> v)
{
    int ans = -1;
    for (int x: v)
        if (x % 2 == 0 && x > ans)
            ans = x;
    return ans;
}

int nMin(vector<int> v)
{
    if (v.size() == 0)
        return 0;
    
    int vmin = v[0], count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == vmin)
            count++;
        else if (v[i] < vmin)
        {
            vmin = v[i];
            count = 1;
        }
    }

    return count;
}