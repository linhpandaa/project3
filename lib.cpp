#include "lib.h"

int maxEven(vector<int> v)
{
    int ans = v[0];
    for (int i = 1; i < v.size(); i++)
        if (v[i] % 2 == 0 && v[i] > ans)
            ans = v[i];
    return ans;
}
