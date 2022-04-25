#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include <iostream>
using namespace std;

int ReduceMinimum  :: binaryOperator(int a, int b){
    int min = a;
    if (a > b){
        min = b;
    }
    return min;
}
