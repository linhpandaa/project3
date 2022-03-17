#include "lib.h"

int main()
{
    bool ans = true;
    // ====== MAXEVEN =======
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

    // ====== NMIN ======
    // test sample (issue #2)
    ans &= nMin({1, 6, 2, 3, 5, 2, 6, 1, 3}) == 2;
    // test empty vector
    ans &= nMin({}) == 0;
    // test vector length = 1
    ans &= nMin({3}) == 1;
    // test vector with all same values
    ans &= nMin({2, 2, 2, 2, 2, 2}) == 6;
    // test vector with many minimum numbers
    ans &= nMin({1, 3, 1, 1, 3, 1}) == 4;
    // test vector lwith only one minimum number
    ans &= nMin({4, 2, 8, 5, 3, 50, 7, 1, 3}) == 1;

    // ====== FIBONACCI ======
    ans &= !isFibonacci(-4);
    ans &= isFibonacci(0);
    ans &= isFibonacci(1);
    ans &= isFibonacci(2);
    ans &= isFibonacci(89);
    ans &= isFibonacci(144);
    ans &= !isFibonacci(12);
    ans &= !isFibonacci(56);
    ans &= isFibonacci(10946);

    // ====== Sum of all fibonacci numbers ======
    // test sample #4 (1)
    ans &= sumFibonacci({1, 3, 5, 8, 2}) == 19;
    // test sample #4 (2): no fibonacci numbers
    ans &= sumFibonacci({4, 0, 9, 6}) == 0;
    // test empty vector
    ans &= sumFibonacci({}) == 0;
    // test negative numbers
    ans &= sumFibonacci({0, -1, -2, -3, -5, 8, -13}) == 8;
    ans &= sumFibonacci({-5, -4, -1}) == 0;
    // test all fibonacci numbers
    ans &= sumFibonacci({1, 2, 3, 5, 8, 13, 21, 34}) == 87;

    if (ans)
        cout << "Test passed!" << endl;
    else
        cout << "Test failed!" << endl;
    return 0;
}