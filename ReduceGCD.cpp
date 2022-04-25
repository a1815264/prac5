#include "ReduceGeneric.h"
#include <iostream>
#include "ReduceGCD.h"
using namespace std;

int ReduceGCD::binaryOperator(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return binaryOperator(a - b, b);
    return binaryOperator(a, b - a);
}
