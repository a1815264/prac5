#include <iostream>
#include "FilterGeneric.h"
using namespace std;
#include "FilterOdd.h"

bool FilterOdd::g(int value)
{
    if (value % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
