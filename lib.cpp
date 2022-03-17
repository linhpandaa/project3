#include "lib.h"
#include <math.h>   // sqrt

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

// Help function: to check if x is a perfect square
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}

bool isFibonacci(int n)
{
    if (n < 0)
        return false;
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}

int sumFibonacci(vector<int> v)
{
    int s = 0;
    for (int x: v)
        if (isFibonacci(x))
            s += x;
    return s;
}