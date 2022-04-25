#include <iostream>
using namespace std;
#include <vector>
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

int main()
{
    MapTriple m1;
    vector<int> v1(4, 100);
    vector<int> v2 = m1.map(v1);
    //for (int i = 0; i < v2.size(); i++)
    //{
    //    cout << v2.at(i) << endl;
    //}
    FilterForTwoDigitPositive f1;
    vector<int> v3(3, 20);
    //vector<int> v4 = f1.filter(v3);
    //for (int i = 0; i < v4.size(); i++)
    //{
    //    cout << v4.at(i) << endl;
    //}

    ReduceMinimum R1;
    ReduceMinimum R2;
    ReduceGCD r1;
    ReduceGCD r2;
    
    return 0;


}