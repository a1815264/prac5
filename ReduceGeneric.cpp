#include "ReduceGeneric.h"
#include <iostream>
using namespace std;

ReduceGeneric::ReduceGeneric(){

}

int ReduceGeneric::reduce(vector<int> vec)
{
    if (vec.size() == 1)
    {
        return vec.at(0);
    }
    reduce(vec);
    return vec.at(0);
}