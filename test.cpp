#include "lib.h"

int main()
{
    bool ans = true;
    // test sample (issue #1)
    ans &= maxEven({1, 6, 2, 3, 5, 2, 6, 1, 3}) == 6;
    // test empty vector
    ans &= maxEven({}) == -1;
    if (ans)
        cout << "Test passed!" << endl;
    else
        cout << "Test failed!" << endl;
    return 0;
}