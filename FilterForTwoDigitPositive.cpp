#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include <iostream>
using namespace std;

bool FilterForTwoDigitPositive::g(int value)
{
    if (value >= 10 && value <= 99)
    {
        return value;
    }
    else
    {
        return false;
    }
}
