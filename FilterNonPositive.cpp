#include "FilterNonPositive.h"
#include <vector>
using namespace std;

bool FilterNonPositive :: g(int value)
{
   if (value > 0){

       return false;
   }
   else {

       return true;
   }
}
