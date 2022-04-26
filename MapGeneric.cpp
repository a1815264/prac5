#include "MapGeneric.h"
#include <iostream>
using namespace std;

vector<int> MapGeneric::map(vector<int> vec)
{
    if (vec.size() == 1)
    {
        vecCopy.push_back(f(vec.at(0)));
        return vecCopy;
    }
    else
    {
        int flag = vec.at(0);
        vec.erase(vec.begin());
        vecCopy.push_back(f(flag));
        map(vec);
        return vecCopy;
    }
}
