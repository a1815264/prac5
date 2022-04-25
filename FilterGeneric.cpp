#include "FilterGeneric.h"
#include <iostream>
using namespace std;

FilterGeneric :: FilterGeneric()
{

}

vector<int> FilterGeneric::filter(vector<int> vec)
{
    int flag = vec.at(0);
    if (g(flag) == true)
    {
        vec.erase(vec.begin());
        vecCopy.push_back(g(flag));
        filter(vec);
    }
    else if (g(flag) == false)
    {
        vec.erase(vec.begin());
        filter(vec);
    }
    return vecCopy;
}