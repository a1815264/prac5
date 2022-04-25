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
    MapTriple MapTriple_1;
    MapTriple MapTriple_2;
    // MapSquare MapSquare_1;
    MapAbsoluteValue MapAbsoluteValue_1;
    MapAbsoluteValue MapAbsoluteValue_2;
    // vector <int> test = {0,-1,2,-3,4,-5,6,-7};
    // vector <int> result_1 = MapTriple_1.map(test);
    // vector <int> result_2 = MapSquare_1.map(test);
    // vector <int> result_3 = MapAbsoluteValue_1.map(test);
    // for(int i = 0; i < test.size(); i++)
    // {
    //     cout << result_1[i] << " " << result_2[i] << " " << result_3[i] <<endl;
    // }

    FilterOdd FilterOdd_1;
    FilterOdd FilterOdd_2;
    // FilterNonPositive FilterNonPositive_1;
    FilterForTwoDigitPositive FilterForTwoDigitPositive_1;
    FilterForTwoDigitPositive FilterForTwoDigitPositive_2;
    // vector <int> test = {11,-1,23,4354,1,22,4,-22};
    // vector <int> result_4 = FilterOdd_1.filter(test);
    // vector <int> result_5 = FilterNonPositive_1.filter(test);
    // vector <int> result_6 = FilterForTwoDigitPositive_1.filter(test);
    // for(int i = 0; i < result_6.size(); i++)
    // {
    //     //cout << result_4[i] << " ";
    //     //cout << result_5[i] << " ";
    //     //cout << result_6[i] << endl;
    // }

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
