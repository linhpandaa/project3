#include <vector>
#include <iostream>
using namespace std;

// искать максимум среди чётных элементов последовательности
// код ошибки: -1 (когда пустой список или нет чётных элементов)
int maxEven(vector<int>);

// искать количество элементов равных ее наименьшему элементу
// код ошибки: 0 (когда пустой список)
int nMin(vector<int>);

// проверить число Фибоначчи с помощью следствия формулы Бине
// Источник: https://en.wikipedia.org/wiki/Fibonacci_number#Identification
// код ошибки: 0 (когда целое число отрицательное)
bool isFibonacci(int);