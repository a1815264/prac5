#include "MapGeneric.h"
#include "MapTriple.h"
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
#include <iostream>
using namespace std;

int main()
{
    vector<int> v1(4, 100);
    MapTriple m1;
    vector<int> v2 = m1.map(v1);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << endl;
    }

    vector<int> v3(3, 20);
    FilterForTwoDigitPositive f1;
    vector<int> v4 = f1.filter(v3);
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4.at(i) << endl;
    }
    return 0;
}
