#include <iostream>
#include <vector>

#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceMinimum.h"
#include "ReduceGCD.h"

using namespace std;

int main()
{
    MapTriple MapTriple_1;
    MapTriple MapTriple_2;

    MapAbsoluteValue MapAbsoluteValue_1;
    MapAbsoluteValue MapAbsoluteValue_2;

    FilterOdd FilterOdd_1;
    FilterOdd FilterOdd_2;

    FilterForTwoDigitPositive FilterForTwoDigitPositive_1;
    FilterForTwoDigitPositive FilterForTwoDigitPositive_2;

    ReduceMinimum ReduceMinimum_1;
    ReduceMinimum ReduceMinimum_2;
    ReduceGCD ReduceGCD_1;
    ReduceGCD ReduceGCD_2;

    vector <int> test = {6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    vector <int> L1 = MapTriple_1.map(MapAbsoluteValue_1.map(test));
    vector <int> L2 = FilterOdd_1.filter(FilterForTwoDigitPositive_1.filter(L1));
    cout << ReduceMinimum_1.reduce(L2) << " " << ReduceGCD_1.reduce(L2) << endl;

    vector <int> test_2 = {-5, -24, -123, -81, 200, 157, 84, 67, -83, -60, -72, 192, -25, -20, -50, -181,-70, -15, -108, -123};
    vector <int> L3 = MapTriple_2.map(MapAbsoluteValue_2.map(test_2));
    vector <int> L4 = FilterOdd_2.filter(FilterForTwoDigitPositive_2.filter(L3));
    cout << ReduceMinimum_2.reduce(L3) << " " << ReduceGCD_2.reduce(L4) << endl;
}
