#include "lib.h"

int main()
{
    bool ans = true;
    // test sample (issue #1)
    ans &= maxEven({1, 6, 2, 3, 5, 2, 6, 1, 3}) == 6;
    // test empty vector
    ans &= maxEven({}) == -1;
    // test vector length = 1
    ans &= maxEven({3}) == -1;
    // test vector length = 1, even exists
    ans &= maxEven({2}) == 2;
    // test vector length > 1, no exist even numbers
    ans &= maxEven({1, 3, 5, 1, 3}) == -1;
    // test vector length > 1, exist even numbers
    ans &= maxEven({1, 2, 8, 2, 3, 50, 7, 1, 3}) == 50;
    if (ans)
        cout << "Test passed!" << endl;
    else
        cout << "Test failed!" << endl;
    return 0;
}